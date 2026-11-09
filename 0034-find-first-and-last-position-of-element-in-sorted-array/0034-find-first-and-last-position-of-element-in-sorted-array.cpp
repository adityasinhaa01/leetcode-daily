class Solution {
public:

    int findFirst(vector<int>& arr, int x) {

		int res = -1;
		int n = arr.size();
		int low = 0; int high = n - 1;
		
		while (low <= high) {
			int guess = (low + high) / 2;
			
			if (arr[guess] < x) {
				low = guess + 1;
			} else if(arr[guess] > x){
				high = guess - 1;
			} else{
                res = guess;
                high = guess - 1;
            }
		}
		return res;
	}

    int findLast(vector<int>& arr, int x) {

		int res = -1;
		int n = arr.size();
		int low = 0; int high = n - 1;
		
		while (low <= high) {
			int guess = (low + high) / 2;
			
			if (arr[guess] < x) {
				low = guess + 1;
			} else if(arr[guess] > x){
				high = guess - 1;
			} else{
                res = guess;
                low = guess + 1;
            }
		}
		
		return res;
	}
    vector<int> searchRange(vector<int>& nums, int target) {
        
        int a = findFirst(nums, target);
        int b = findLast(nums, target);

        return {a, b};
    }
};