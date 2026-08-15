class Solution {
public:
/* my idea is to create a 1d array that stores a hashmap of each row
then create another array that stores a hashmap of each column
then a 2d array that stores a hashmap of each box */
//when i ran it for the first time, it failed because i didn't initialize boxCount
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_map<int,int>> rowCount(9);
        vector<unordered_map<int,int>> columnCount(9);
        vector<vector<unordered_map<int,int>>> boxCount(3, vector<unordered_map<int, int>>(3));
        for(int row = 0; row<9;row++){
            
            for(int column= 0;column<9;column++){
            if(board[row][column]!='.'){
                rowCount[row][board[row][column]-'0']++;
                columnCount[column][board[row][column]-'0']++;
                boxCount[row/3][column/3][board[row][column]-'0']++;
            }
            

        }}
        for(auto r: rowCount){
            for(auto number: r){
               
            if(number.second >1){
                return false;
            }
        }}

        for(auto c : columnCount){
        for(auto number: c){
            if(number.second>1){
                return false;
            }
        }}

        for(auto b: boxCount){
        for(auto rowBox: b){

            for(auto num: rowBox){
                if(num.second>1){
                    return false;
                }
            }
        }}
        return true;
    }
};
