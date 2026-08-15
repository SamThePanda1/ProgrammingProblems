class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> triplet;
        std::sort(nums.begin(),nums.end());
        for(int i = 0;i<nums.size();i++){
            int left = i+1;
            int right = nums.size()-1;
            if(i != 0 && nums[i-1]== nums[i]){
                continue;
            }
            while(left<right){
                if(nums[left]+nums[right]== -nums[i]){
                    triplet.push_back({nums[i],nums[left],nums[right]});
                    left++;
                    right--;
                    while(left<right && nums[left]==nums[left-1]){
                        left++;
                    }
                    continue;
                }
                if(nums[left]+nums[right] > -nums[i]){
                    right--;
                    continue;
                }
                left++;
            }
        }
        return triplet;
    }
};
