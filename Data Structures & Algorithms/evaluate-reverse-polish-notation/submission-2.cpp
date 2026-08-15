class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        std::stack<int> operands;
        
        for(int i = 0 ; i< tokens.size(); i++){
            if(tokens[i]=="+"){
                int first = operands.top();
                operands.pop();
                int sum = operands.top()+first;
                operands.pop();
                operands.push(sum);
            }
            else if(tokens[i]=="-"){
                int sec = operands.top();
                operands.pop();
                int diff = operands.top()-sec;
                operands.pop();
                operands.push(diff);
            }
            else if(tokens[i] == "*"){
                int first = operands.top();
                operands.pop();
                int prod = first*operands.top();
                operands.pop();
                operands.push(prod);
            }
            else if(tokens[i]=="/"){
                int sec = operands.top();
                operands.pop();
                int quo = operands.top()/sec;
                operands.pop();
                operands.push(quo);
            }
            else{
                operands.push(stoi(tokens[i]));
            }
            
        }
        return operands.top();
    }
};
