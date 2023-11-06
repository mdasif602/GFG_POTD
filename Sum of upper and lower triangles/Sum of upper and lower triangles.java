class Solution
{
    //Function to return sum of upper and lower triangles of a matrix.
    static ArrayList<Integer> sumTriangles(int matrix[][], int n)
    {
        // code here
        ArrayList<Integer> ans = new ArrayList<>();
        
        int sum1 = 0;
        int sum2 = 0;
        
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(i == j) {
                    sum1 += matrix[i][j];
                    sum2 += matrix[i][j];
                }
                else if(i < j) {
                    sum1 += matrix[i][j];
                } else {
                    sum2 += matrix[i][j];
                }
            }
        }
        
        ans.add(sum1);
        ans.add(sum2);
        
        return ans;
    }
}
