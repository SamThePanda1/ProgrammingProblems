class Solution {
public:
//in the first submission i didn't do x+= length+1;
    string encode(vector<string>& strs) {
        string res = "";
        for(int i = 0; i <strs.size();i++){
            int length = strs[i].length();
            res += std::to_string(length)+"#"+strs[i];
        }
        return res;
    }

    vector<string> decode(string s) {
        
        int length = 0;
        int startPos = 0;
        vector<string> decode;
        for(int x = 0; x<s.length();){
            startPos = x;
            while(s[x]!='#'){
                x++;
            }
           
            length = std::stoi(s.substr(startPos,x-startPos));
            decode.push_back(s.substr(x+1,length));
            //add x by the length plus one so that we start on the next character that contains the length
            x += length+1;
        }
        return decode;
    }
};
