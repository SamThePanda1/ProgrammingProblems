class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,int> numList;
        for(int num: nums){
            numList[num]++;
        }
        int length = 0;
        int max = 0;
        for(auto num: nums){
            //you only do the while loop if you do not find it
            if(numList.find(num-1)== numList.end()){
                while(numList.find(num+length)!= numList.end()){
                length++;}
            
                if(max<length){
                max = length;
                }
                length = 0;
            }

        }
        return max;
    }
};
