class Solution {
private:
   bool isvalid(vector<string>& board, int row, int col)
   {
     int n = board.size();


        for (int i = 0; i < col; i++) 
        {
            if (board[row][i] == 'Q') 
            return false;
        }

        
        for(int r= row-1, c = col-1; r >= 0 && c >= 0; r--, c--)
        {
             if (board[r][c] == 'Q') 
            return false;
        }
        
         for(int r= row+1,  c = col-1; r <n && c >= 0; r++, c--)
        {
             if (board[r][c] == 'Q') 
            return false;
        }

  return true;
        

   }

    void func(int col, vector<vector<string>>& ans, vector<string>& board) 
    {
     
        if(col == board.size())
        {
            ans.push_back(board);
            return;
        }

         
     
        for(int row =0; row< board.size(); row++)
        {
            if(isvalid(board, row, col))
            {
                board[row][col]= 'Q';

                func(col+1, ans, board);

               
                board[row][col]= '.';
            }
        }

    }
public:
    vector<vector<string>> solveNQueens(int n) 
    {
         if(n <= 0) return {{}};
        vector<vector<string>> ans;
        vector<string>board(n, string(n,'.'));
        func(0, ans, board);
        return ans;

        
    }
};