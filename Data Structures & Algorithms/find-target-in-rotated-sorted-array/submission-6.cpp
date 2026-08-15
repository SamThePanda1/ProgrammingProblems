class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size()-1;
        int mid = (l+r)/2;
        //find position of middle element, whether it is part of the left or right segment
        while(l<=r){
            if(nums[mid]==target){
                return mid;
            }
            if(nums[l]<=nums[mid]){
                if(target>=nums[mid]||target<nums[l]){
                    l= mid+1;
                }
                else{
                    r= mid-1;
                }
            }
            else{
                if(target<=nums[mid]||target>nums[r]){
                    r=mid-1;
                }
                else{
                    l = mid+1;
                }
                
            }
            mid = (l+r)/2;
        }
        return -1;
    }
};
