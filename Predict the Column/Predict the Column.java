class Solution
{
    int columnWithMaxZeros(int arr[][], int N)
    {
        // code here 
        int max = Integer.MIN_VALUE;
        int index = -1;
        for(int i = 0; i < arr.length; i++) {
            int count = 0;
            for (int j = 0; j < arr.length; j++) {
                if(arr[j][i] == 0) {
                    count++;
              }
            }
            if(count == arr.length) {
                return i;
            }
            
            if(count > max && count != 0) {
                index = i;
                max = count;
            }
        
        
    }
    
    return index;
    }
}
