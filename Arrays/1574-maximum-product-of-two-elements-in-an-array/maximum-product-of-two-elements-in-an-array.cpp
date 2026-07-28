class Solution {
public:
    int maxProduct(vector<int>& nums) {
        // two pointer approach
        int max_prod = 0;
        int left = 0;
        int right = nums.size() - 1;

        while(left < right) {
            int temp_ans = (nums[left] - 1) * (nums[right] - 1);
            max_prod = max(max_prod , temp_ans);
            
            if(nums[left] < nums[right]) {
                left++;
            } else {
                right--;
            }
        }

        return max_prod;
    }
};