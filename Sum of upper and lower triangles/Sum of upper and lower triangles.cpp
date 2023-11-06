class Solution
{   
    public:
    //Function to return sum of upper and lower triangles of a matrix.
    vector<int> sumTriangles(const vector<vector<int> >& matrix, int n)
    {
        // code here
        vector<int> ans(2);
  int sum1 = 0;
  int sum2 = 0;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i == j) {
        sum1 += matrix[i][j];
        sum2 += matrix[i][j];
      } else if (i < j) {
        sum1 += matrix[i][j];
      } else {
        sum2 += matrix[i][j];
      }
    }
  }

  ans[0] = sum1;
  ans[1] = sum2;

  return ans;
    }
};
