#define vi vector<int>
#define vvi vector<vi>
class Solution {
  public:
    vvi ans;  // Stores all valid board configurations

    // Function to check if we can place a queen at (i, j)
    bool checkForQueen(int i, int j, int n, vector<string> &grid) {
        int ci = i, cj = j;
        
        // Check vertically upwards in the same column
        while (i >= 0) {
            if (grid[i][j] == 'Q') return false;
            --i;
        }

        // Reset i to original and check top-left diagonal
        i = ci, j = cj;
        while (i >= 0 && j >= 0) {
            if (grid[i][j] == 'Q') return false;
            --i, --j;
        }

        // Reset i and j to original and check top-right diagonal
        i = ci, j = cj;
        while (i >= 0 && j < n) {
            if (grid[i][j] == 'Q') return false;
            --i, ++j;
        }
        
        return true;  // Safe to place queen
    }

    // Backtracking function to place queens
    void help(int row, int n, vector<int> &temp, vector<string> &grid) {
        // Base case: All queens are placed
        if (row >= n) {
            ans.push_back(temp);  // Store valid board configuration
            return;
        }
        
        // Try placing queen in each column
        for (int i = 0; i < n; ++i) {
            if (checkForQueen(row, i, n, grid)) { // If safe, place queen
                grid[row][i] = 'Q';
                temp.push_back(i + 1); // Store 1-based column index
                
                help(row + 1, n, temp, grid); // Recur for next row
                
                // Backtrack: Remove queen and try next column
                temp.pop_back();
                grid[row][i] = '.';
            }
        }
    }

   
    vector<vector<int>> nQueen(int n) {
        vector<string> chess(n, string(n, '.')); // Initialize empty board
        vector<int> temp; // To store one valid arrangement
        
        help(0, n, temp, chess); // Start placing queens from row 0
        
        return ans; // Return all valid solutions
    }
    
};
