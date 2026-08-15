class Solution {
public:


    void backTrack(int open, int closed, int n, vector<string> & res, string& stack){
            if(open==closed&&open==n){
                res.push_back(stack);
                return;
            }
            if(open<n){
                stack+= '(';
                backTrack(open+1,closed,n,res,stack);
                stack.pop_back();
            }
            if(closed<open){
                stack+=')';
                backTrack(open, closed+1,n ,res,stack);
                stack.pop_back();
            }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        string stack;
        backTrack(0,0,n,res,stack);
        return res;
    }
};
