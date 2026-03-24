#include <bits/stdc++.h>
using namespace std;

vector<int> productExceptSelf(vector<int> nums){
    int n = nums.size();
    
    vector<int> answer(n);
    vector<int> prefix(n);
    vector<int> suffix(n);
    
    prefix[0] = 1;
    suffix[n-1] = 1;
    
    // prefix
    for(int i = 1; i < n; i++) {
        prefix[i] = prefix[i-1] * nums[i-1];
    }
    
    // suffix
    for(int i = n-2; i >= 0; i--){
        suffix[i] = suffix[i+1] * nums[i+1];
    }
    
    // answer
    for(int i = 0; i < n; i++){
        answer[i] = prefix[i] * suffix[i];
    }
    
    return answer;
}

void printVector(vector<int> answer){
    for(int it : answer){
        cout<<it<<" ";
    }
}
int main() {
    // suffix = {_,_,24,12,4,1}
    vector<int> nums = {1,2,3,4};
    vector<int> answer;
    answer = productExceptSelf(nums);
    
    printVector(answer);
    
    return 0;
}
