class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        // ---------------- ROWS ----------------
        for(int i = 0; i < 9; i++) {

            int freq[10] = {0};

            for(int j = 0; j < 9; j++) {

                // Ignore empty cells
                if(board[i][j] == '.')
                    continue;

                int num = board[i][j] - '0';

                // If we have already seen this number
                if(freq[num] == 1)
                    return false;

                freq[num]++;
            }
        }


        // ---------------- COLUMNS ----------------
        for(int j = 0; j < 9; j++) {

            int freq[10] = {0};

            for(int i = 0; i < 9; i++) {

                // Ignore empty cells
                if(board[i][j] == '.')
                    continue;

                int num = board[i][j] - '0';

                // Duplicate found
                if(freq[num] == 1)
                    return false;

                freq[num]++;
            }
        }


        // ---------------- 3 x 3 BOXES ----------------
        for(int row = 0; row < 9; row += 3) {

            for(int col = 0; col < 9; col += 3) {

                int freq[10] = {0};

                // Visit the 3 x 3 box
                for(int i = row; i < row + 3; i++) {

                    for(int j = col; j < col + 3; j++) {

                        if(board[i][j] == '.')
                            continue;

                        int num = board[i][j] - '0';

                        // Duplicate found
                        if(freq[num] == 1)
                            return false;

                        freq[num]++;
                    }
                }
            }
        }

        return true;
    }
};