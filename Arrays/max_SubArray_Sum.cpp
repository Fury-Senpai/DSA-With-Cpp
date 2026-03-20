#include <iostream>
#include <climits>
#include <vector>
using namespace std;

// Max Sub Array Sum Problem using Kadane's ALgorithm
int maxSubArraySum(vector<int> &num) {
    // Kadane's ALgorithm
    
    int maxSum = INT_MIN;
    int currSum = 0;
    
    for(int i = 0; i<num.size(); i++){
        currSum += num[i];
        maxSum = max(currSum , maxSum);
        if(currSum < 0){
            currSum = 0;
        }
    }
    
    return maxSum;
}
int main() {
    vector <int> num = {-1,0 ,12 ,21 ,-12 ,1 ,100};
    
    int sum = maxSubArraySum(num);
    cout<<sum;
    
    return 0;
}
