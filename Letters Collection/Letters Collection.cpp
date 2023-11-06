class Solution{
public:
    static vector<int> matrixSum(int n, int m, vector<vector<int>> mat, int q, vector<int> queries[]) {
    vector<int> ans;
    int sum = 0;
    vector<vector<int>> two = {
      {-2, -2},
      {-1, -2},
      {0, -2},
      {1, -2},
      {2, -2},
      {2, -1},
      {2, 0},
      {2, 1},
      {2, 2},
      {1, 2},
      {0, 2},
      {-1, 2},
      {-2, 2},
      {-2, 1},
      {-2, 0},
      {-2, -1}
    };

    for (int i = 0; i < q; i++) {
      sum = 0;
      if (queries[i][0] == 1) {
        if (queries[i][1] - queries[i][0] >= 0 && queries[i][2] - queries[i][0] >= 0) {
          sum += mat[queries[i][1] - queries[i][0]][queries[i][2] - queries[i][0]];
        }

        if (queries[i][1] - queries[i][0] >= 0) {
          sum += mat[queries[i][1] - queries[i][0]][queries[i][2]];
        }

        if (queries[i][1] - queries[i][0] >= 0 && queries[i][2] + queries[i][0] < m) {
          sum += mat[queries[i][1] - queries[i][0]][queries[i][2] + queries[i][0]];
        }

        if (queries[i][2] - queries[i][0] >= 0) {
          sum += mat[queries[i][1]][queries[i][2] - queries[i][0]];
        }

        if (queries[i][2] + queries[i][0] < m) {
          sum += mat[queries[i][1]][queries[i][2] + queries[i][0]];
        }

        if (queries[i][1] + queries[i][0] < n && queries[i][2] - queries[i][0] >= 0) {
          sum += mat[queries[i][1] + queries[i][0]][queries[i][2] - queries[i][0]];
        }

        if (queries[i][1] + queries[i][0] < n) {
          sum += mat[queries[i][1] + queries[i][0]][queries[i][2]];
        }

        if (queries[i][1] + queries[i][0] < n && queries[i][2] + queries[i][0] < m) {
          sum += mat[queries[i][1] + queries[i][0]][queries[i][2] + queries[i][0]];
        }
      } else if (queries[i][0] == 2) {
        for (int j = 0; j < two.size(); j++) {
          if (check(queries[i][1] + two[j][0], queries[i][2] + two[j][1], n, m)) {
            sum += mat[queries[i][1] + two[j][0]][queries[i][2] + two[j][1]];
          }
        }
      }

      ans.push_back(sum);
    }

    return ans;
  }

private:
  static bool check(int i, int j, int n, int m) {
    return (i >= 0 && i < n) && (j >= 0 && j < m);
  }
};
