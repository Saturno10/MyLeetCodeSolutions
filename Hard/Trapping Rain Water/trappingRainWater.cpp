class Solution {
public:
    int trap(vector<int> height) {
        int n = height.size();
        if (n < 3) return 0;

        int left = 0, right = n - 1;
        int leftMax = 0, rightMax = 0;
        int water = 0;
        //Delete useless part of vector
        while(height[0] == 0){
            height.erase(height.begin());
        }
        while(height[height.size()-1] == 0){
            height.pop_back();
        }
        //Traversing with two pointers
        while (left < right) {
            if (height[left] < height[right]) {
                if (height[left] >= leftMax) {
                    leftMax = height[left];
                } else {
                    water += leftMax - height[left];
                }
                left++;
            } else {
                if (height[right] >= rightMax) {
                    rightMax = height[right];
                } else {
                    water += rightMax - height[right];
                }
                right--;
            }
        }

        return water;
    }
};
