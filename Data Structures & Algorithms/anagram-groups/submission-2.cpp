class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<vector<int>, vector<string>> anagramGroup;

        for(auto word: strs){
            
            vector<int> count(26,0);
            for(auto character: word){
                count[static_cast<int>(character) - static_cast<int>('a')]++;

            }
            anagramGroup[count].push_back(word);
            
        }

        vector<vector<string>> anagramList;
        for(auto group: anagramGroup){
            anagramList.push_back(group.second);
        }
        return anagramList;

    }
};
