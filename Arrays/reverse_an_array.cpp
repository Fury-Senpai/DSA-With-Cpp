#include <iostream>
#include <iterator>
using namespace std;

void reverseArr(int arr[] , int len) {
    int st = 0;
    int end = len - 1;

    while(st < end) {
        swap(arr[st] , arr[end]);
        st++;
        end--;
    }
    
}

void printArr(int arr[] , int len) {
    for(int i = 0; i<len; i++) {
        cout<<arr[i]<<" ";
    }
}
int main() {
    int n;
    cin >> n;

    int arr[] = {4,2,7,8,1,2,5};
    int len = sizeof(arr) / sizeof(arr[0]);
    
    reverseArr(arr , len);
    printArr(arr , len);
    return 0;
}
