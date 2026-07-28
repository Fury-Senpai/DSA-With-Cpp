class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max_prod = 0;

        for(int i = 0; i<nums.size() - 1; i++) {
            for(int j = i+1; j<nums.size(); j++) {
                int temp_ans = (nums[i] - 1) * (nums[j] - 1);
                max_prod = max(max_prod,temp_ans);
            }
        }

        return max_prod;
    }
};