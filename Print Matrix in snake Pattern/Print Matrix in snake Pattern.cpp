class Solution
{   
    public:
    //Function to return list of integers visited in snake pattern in matrix.
    vector<int> snakePattern(vector<vector<int> > matrix)
    {   
        // code here
        vector<int> ans;
          int flag = 0;
        
          for (int i = 0; i < matrix.size(); ++i) {
            if (flag == 0) {
              for (int j = 0; j < matrix[i].size(); ++j) {
                ans.push_back(matrix[i][j]);
              }
              flag = 1;
            } else {
              for (int j = matrix[i].size() - 1; j >= 0; --j) {
                ans.push_back(matrix[i][j]);
              }
              flag = 0;
            }
          }
        
          return ans;

    }
};
