#include <bits/stdc++.h>
using namespace std;

void binarySearch(vector<int> &nums , int target){
    sort(nums.begin() , nums.end());
    
    int flag = false;
    int left = 0;
    int right = nums.size() - 1; 
    
    
    while(left < right){
        int mid = left + (right - left) / 2;
        
        if(nums[mid] == target){
            flag = true;
            break;
        }
        else if(nums[mid] > target){
            right = mid-1;
        }
        else{
            left = mid+1;
        }
    }
    
    if(flag == true){
        cout<<"Element found!"<<endl;
    }else{
        cout<<"Element not found!"<<endl;
    }
    
}
int main(){
    vector<int> nums = {1,3,21,0 ,-12 , 2};
    int target;
    cin >> target;
    binarySearch(nums,target);
    
    return 0;
}
