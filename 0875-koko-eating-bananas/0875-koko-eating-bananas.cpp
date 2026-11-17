class Solution {
public:

    long long timeFn(vector<int>& arr, int n, int speed){
        long long time = 0;

        for(int i = 0; i < n; i++){
            time = time + arr[i]/speed;
            if(arr[i]%speed != 0){
                time++;
            }
        }

        return time;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        
        int n = piles.size();
        int low = 1;
        int high = *max_element(piles.begin(), piles.end());
        int res = high;

        while(low <= high){
            int mid = low + (high-low)/2;

            long long time = timeFn(piles, n, mid);

            if(time > h){
                low = mid+1;
            }else{
                res = mid;
                high = mid-1;
            }
        }

        return res;

    }
};