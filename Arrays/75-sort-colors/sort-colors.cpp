class Solution {
public:
    void sortColors(vector<int>& nums) {

        // counting sort way

        vector<int> count = {0,0,0};

        for(int i = 0; i<nums.size(); i++) {
            if(nums[i] == 0) {
                count[0]++;
            } else if(nums[i] == 1) {
                count[1]++;
            } else  {
                count[2]++;
            }
        } 

    

        int it = 0;

        for(int i = 0; i<count.size(); i++) {
            for(int j = 0; j<count[i]; j++) {
                nums[it] = i;
                it++;
            }
        }
       
    }
};