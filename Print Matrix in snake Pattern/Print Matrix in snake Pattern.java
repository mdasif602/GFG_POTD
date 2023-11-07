class Solution
{
    //Function to return list of integers visited in snake pattern in matrix.
    static ArrayList<Integer> snakePattern(int matrix[][])
    {
        // code here 
        ArrayList<Integer> ans = new ArrayList<>();
        int flag = 0;
        for(int i = 0; i < matrix.length; i++){
            if(flag == 0){
                 for(int j = 0; j < matrix.length; j++){
                    ans.add(matrix[i][j]);
                }
                flag = 1;
            } else {
                for(int j = matrix.length - 1; j >= 0; j--) {
                    ans.add(matrix[i][j]);
                }
                flag = 0;
            }
            
        }
        
        return ans;
    }
}
