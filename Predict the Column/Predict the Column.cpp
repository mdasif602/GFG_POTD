
class Solution{
    public:
    /*Function to count zeros in each column
    * N : Number of rows and columns in array
    M is the matrix that is globally declared
    */
    int columnWithMaxZeros(vector<vector<int>>arr,int N){
        
        // Your code here
                    int max = INT_MIN;
              int index = -1;
            
              for (int i = 0; i < arr.size(); ++i) {
                int count = 0;
            
                for (int j = 0; j < arr.size(); ++j) {
                  if (arr[j][i] == 0) {
                    count++;
                  }
                }
            
                if (count == arr.size()) {
                  return i;
                }
            
                if (count > max && count != 0) {
                  index = i;
                  max = count;
                }
              }
            
              return index;
                    
        
    }
};
