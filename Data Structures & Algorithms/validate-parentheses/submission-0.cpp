class Solution {
public:
    bool isValid(string s) {
        vector<char> paren; 
        std::unordered_map<char, char> dict = { {'}', '{'},{ ']','['} ,{')','('}};
        std::unordered_set<char> start= {'(','[','{'};
        
     for(int i = 0 ; i < s.length(); i++){
        if(paren.empty()||start.find(s[i])!=start.end()){
            paren.push_back(s[i]);
            continue;
        }
        if(dict[s[i]]!= paren.back()){
            return false;
        }
        else{
            paren.pop_back();
        }
     }  
     if(paren.empty()){
        return true;
     } 
     return false;

    }

};
