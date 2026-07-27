class Solution {
public:
    void sortColors(vector<int>& nums) {
        // two pass swap partiotion

        int front = 0;
        for(int i = 0; i<nums.size(); i++) {
            if(nums[i] == 0) {
                swap(nums[i] , nums[front]);
                front++;
            }
        }

        int back = nums.size() - 1;
        int i = front;
        while(i <= back) {
            if(nums[i] == 2) {
                swap(nums[back] , nums[i]);
                back--;
            } else {
                i++;
            }
        }
    }
};