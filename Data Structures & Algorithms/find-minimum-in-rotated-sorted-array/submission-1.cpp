class Solution {
public:
    int findMin(vector<int> &nums) {
        int left = 0;
        int right = nums.size()-1;
        int mid = (left+right)/2;
        if(nums[left]<nums[right]){
            return nums[left];
        }
        while(left<right){
        mid = (left+right)/2;
            if(nums[mid]<nums[mid+1] && nums[mid]>nums[left]){
                left +=1;
            }
            else if(nums[mid]<nums[mid+1] && nums[mid]<nums[left]){
                right -=1;
            }
            else{
                return nums[mid+1];
            }
        }
        return nums[mid];
    }
};
