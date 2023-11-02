class Solution{
public:
	// Function to check if the
	// Pythagorean triplet exists or not
	bool checkTriplet(int arr[], int n) {
	    // code here
	    sort(arr, arr + n);
        for(int i = 0; i < n; i++) {
            arr[i] *= arr[i];
        }
        for(int i = n - 1; i >= 2; i--) {
            int start = 0;
            int end = i - 1;
            int sum = 0;
            while(start < end) {
                sum = arr[start] + arr[end];
                if(sum == arr[i]) {
                    return true;
                }
                if(sum > arr[i]) {
                    end--;
                } else {
                    start++;
                }
            }
        }
        return false;
	}
};
