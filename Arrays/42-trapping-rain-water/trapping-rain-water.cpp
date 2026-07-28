class Solution {
public:
    int trap(vector<int>& height) {
        // two pointer approach
        // tc O(n)
        // sc O(1)
        int n = height.size();
        int lmax = height[0];
        int rmax = height[n-1];
        int left = 0;
        int right = n-1;
        int max_water = 0;

        while(left < right) {
            lmax = max(height[left] , lmax);
            rmax = max(height[right] , rmax);

            if(lmax < rmax) {
                max_water += lmax - height[left];
                left++;
            } else {
                max_water += rmax - height[right];
                right--;
            }
        }
        return max_water;
    }
};