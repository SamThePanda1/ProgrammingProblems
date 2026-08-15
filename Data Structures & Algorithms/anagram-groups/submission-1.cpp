class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<std::string, vector<string>> anagramGroup;
        for(auto word: strs){
            string sorted = word;
            sort(sorted.begin(),sorted.end());
            anagramGroup[sorted].push_back(word);
        }

        vector<vector<string>> anagramList;
        for(auto group: anagramGroup){
            anagramList.push_back(group.second);
        }
        return anagramList;

    }
};
