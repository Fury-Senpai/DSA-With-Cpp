#include <iostream>
#include <vector>
using namespace std;

//container with most water
int maxArea(vector<int> &height){
    int left = 0;
    int right = height.size();
    int maxArea = 0;
    
    while(left < right){
        int length = min(height[left] , height[right]);
        int width = right - left;
        int area = length * width;
        maxArea = max(maxArea , area);
        
        if(height[left] < height[right]){
            left++;
        }
        else{
            right--;
        }
    }
    
    return maxArea;
}

void populateHeight(vector<int> &height , int N) {
    while(N > 0) {
        int num ;
        cin >> num;
        height.push_back(num);
        N--;
    }
}

int main() {
    int repeat;
    cin >> repeat;
    
    while(repeat > 0){
        vector<int> height; //{1,8,6,2,5,4,8,3,7}
        int N;
        cin >> N;
            
        populateHeight(height , N);
        int area = maxArea(height);
        
        cout<<area<<endl;
        
        repeat--;
    }

    
    
    return 0;
}
