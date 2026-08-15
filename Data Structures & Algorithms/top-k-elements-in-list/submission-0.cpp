class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        std::map<int ,int> count;
        vector<vector<int>> freq(nums.size()+1);
       for(int number: nums){
        count[number]++;
       } 
       for(std::pair<int,int> group: count){
        freq[group.second].push_back(group.first);
       }

        
        vector<int> topK;
       for(int frequency = freq.size()-1; frequency>0; frequency--){

            for(int num = 0; num< freq[frequency].size();num++ ){
                topK.push_back(freq[frequency][num]);
                if(topK.size()==k){
                    return topK;
                }
            }
       }
       return topK;
    }
};
