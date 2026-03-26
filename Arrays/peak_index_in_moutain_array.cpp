#include <bits/stdc++.h>
using namespace std;

// Using Binary Search Algorithm
int peakIndexInMountainArray(vector<int> arr){
    
    int st = 0; 
    int end = arr.size() - 1;
    
    while(st <= end){
        int mid = st + (end - st) / 2;
        if(arr[mid-1] < arr[mid] && arr[mid] > arr[mid+1]) return mid;
        
        if(arr[mid-1] > arr[mid]){
            end = mid;
        }
        else{
            st = mid+1;
        }
    }
}
int main() {
	// your code goes here   ^
    vector<int> arr = {0,10,20,501,500 , 21};
    int peakInd = peakIndexInMountainArray(arr);
    cout<<peakInd<<endl;
    
    return 0;
}
