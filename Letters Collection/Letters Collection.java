class Solution{
    static List<Integer> matrixSum(int n, int m, int mat[][], int q, int queries[][])
    {
        // code here
        List<Integer> ans = new ArrayList<>();
        int sum = 0;
        int[][] two = {
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
        for(int i = 0; i < q; i++) {
            sum = 0;
            if(queries[i][0] == 1) {
                    if(queries[i][1] - queries[i][0] >= 0 && queries[i][2] - queries[i][0] >= 0) { 
                        sum += mat[queries[i][1] - queries[i][0]][queries[i][2] - queries[i][0]];
                    }
                    
                    if(queries[i][1] - queries[i][0] >= 0) { 
                        sum += mat[queries[i][1] - queries[i][0]][queries[i][2]];
                    }
                    
                    if(queries[i][1] - queries[i][0] >= 0 && queries[i][2] + queries[i][0] < m) { 
                        sum += mat[queries[i][1] - queries[i][0]][queries[i][2] + queries[i][0]];
                    }
                    
                    if(queries[i][2] - queries[i][0] >= 0) { 
                        sum += mat[queries[i][1]][queries[i][2] - queries[i][0]];
                    }
                    
                    if(queries[i][2] + queries[i][0] < m) { 
                        sum += mat[queries[i][1]][queries[i][2] + queries[i][0]];
                    }
                    if(queries[i][1] + queries[i][0] < n && queries[i][2] - queries[i][0] >= 0) { 
                        sum += mat[queries[i][1] + queries[i][0]][queries[i][2] - queries[i][0]];
                    }
                    
                    if(queries[i][1] + queries[i][0] < n) { 
                        sum += mat[queries[i][1] + queries[i][0]][queries[i][2]];
                    }
                    
                    if(queries[i][1] + queries[i][0] < n && queries[i][2] + queries[i][0] < m) { 
                        sum += mat[queries[i][1] + queries[i][0]][queries[i][2] + queries[i][0]];
                    }
            
            }
            
            if(queries[i][0] == 2) {
                for(int j = 0; j < two.length; j++) {
                    if(check(queries[i][1] + two[j][0], queries[i][2] + two[j][1], n, m)){
                        sum += mat[queries[i][1] + two[j][0]][queries[i][2] + two[j][1]];
                    }
                }
            }
            
            ans.add(sum);
        }
        
        return ans;
    }
    
    private static boolean check(int i, int j, int n, int m) {
        if(i >= 0 && i < n && j >= 0 && j < m) {
            return true;
        }
        
        return false;
    }
}
