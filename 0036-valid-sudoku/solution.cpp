class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<char>>rows(9);
        vector<unordered_set<char>>cols(9);
        vector<unordered_set<char>>boxs(9);
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){

                if(board[i][j]=='.') continue;

                if(rows[i].count(board[i][j])) return false;
                else rows[i].insert(board[i][j]);

                if(cols[j].count(board[i][j])) return false;
                else cols[j].insert(board[i][j]);

                int boxIndex=(i/3)*3+(j/3);

                if(boxs[boxIndex].count(board[i][j])) return false;
                else boxs[boxIndex].insert(board[i][j]);
            }
        }
        return true;
    }
};
