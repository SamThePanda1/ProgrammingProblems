class Solution {
public:
//first attempt without help I just know I need two pointers
//this approach will go through the array until we find a height greater than 0
//that point will be the boundary, then we move the right pointer until we find
//a height that is equal to the boundary. To find area we just add the difference
//of the boundary height and the current height for each height between the boundary and 
//the right pointer.
//My curren t answer doesn't count for the fact that the container will store water
//if the boundary is 4 and the right pointer is 2. 
    int trap(vector<int>& height) {
        int left = 0;
        int right = height.size()-1;
        int area = 0;
        int maxLeft = height[left];
        int maxRight = height[right];
        while(left<right){
            if(maxLeft>maxRight){
                right--;
                maxRight = std::max(maxRight, height[right]);
                area+= maxRight-height[right];
            }
            else{
                left++;
                maxLeft = std::max(maxLeft, height[left]);
                area+=maxLeft-height[left];
            }


        }

        return area;
    }
};
