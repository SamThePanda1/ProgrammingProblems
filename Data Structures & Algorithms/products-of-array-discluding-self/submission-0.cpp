class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        //in the first loop, we make the result[index] as the product of the numbers
        //before it
        vector<int> res(nums.size(),0);

        int prefix = 1;
        for(int p = 0; p<nums.size();p++){
            res[p] = prefix;
            prefix *= nums[p];
        }


        //in the second loop we just multiply the result[index] by the product 
        //of the numbers after it
        int suffix = 1;
        for(int s = nums.size() -1; s>-1;s--){
            res[s] *= suffix;
            suffix *=nums[s];
        }
        return res;
    }
};
