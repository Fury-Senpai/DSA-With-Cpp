#include <bits/stdc++.h>
using namespace std;

//Brute Force Way - O(n^2)
vector<int> productExceptSelf(vector<int> nums){
    vector<int> answer;
    
    for(int i = 0; i<nums.size(); i++){
        int product = 1;
        for(int j = 0; j<nums.size(); j++){
            if(i == j) {
                
                continue;
            }
            else {
                product = product * nums[j];
            }
        }
        answer.push_back(product);
    }
    
    return answer;
}

void printVector(vector<int> answer){
    for(int it : answer){
        cout<<it<<" ";
    }
}
int main() {
    vector<int> nums = {-1,1,0,-3,3};
    vector<int> answer;
    answer = productExceptSelf(nums);
    
    printVector(answer);
    
    return 0;
}
