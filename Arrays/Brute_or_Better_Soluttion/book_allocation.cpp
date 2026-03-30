#include <bits/stdc++.h>
using namespace std;

// Book Allocation or Pages Allocation Problem using Linear Search or Brute Force Way
bool checkValid(vector<int> &arr , int maxPage , int k){
    int currPage = 0;
    int student = 1;
    //looping to find whether the pages are valid or not
    for(int i = 0; i<arr.size(); i++){
        if(currPage + arr[i] <= maxPage){
            currPage += arr[i];
        }
        else{
            student++;
            currPage = arr[i];
        }
    }
    if(student <= k){
        return true;
    }
    return false;
}

int findPages(vector<int> &arr , int k){
    // edge case
    if(k > arr.size()) return -1;
    
    // code
    int totalPages = 0;
    int highestPage = INT_MIN;
    //looping over to find the total Pages and highestPage
    for(int i = 0; i<arr.size(); i++){
        totalPages += arr[i];
        highestPage = max(highestPage , arr[i]);
    }
    //now looping to find book allocation
    for(int i = highestPage; i<=totalPages; i++){
        bool valid = checkValid(arr , i , k);
        if(valid == true) return i;
    }
    return -1;
}

int main() {
	// your code goes here
	// TC = O(sum of arr + (n * n))
    vector<int> arr = {12, 34, 67, 90};
    int k = 2;
    int pages = findPages(arr , k);
    cout<<pages<<endl;
    
    return 0;
}
