class Solution {
public:
    int trap(vector<int>& height) {

        int n = height.size();
        vector<int> leftmax(n,0);
        vector<int> rightmax(n,0);

        int result = 0;

        leftmax[0] = height[0];
        for(int i = 1; i < n; i++){
            //if(i == 0) leftmax.push_back(height[0]);
            if(leftmax[i-1] < height[i]) leftmax[i] = height[i];
            else leftmax[i] = leftmax[i-1];
        }
        rightmax[n-1] = height[n-1];
        for(int i = n-2; i >= 0; i--){
            //if(i == n-1) rightmax.push_back(height[n-1]);
            if(rightmax[i+1] < height[i]) rightmax[i] = height[i];
            else rightmax[i] = rightmax[i+1];
        }

        //calculating water trapped for every bar

        for(int i = 1; i < n-1; i++){
            int water = min(leftmax[i], rightmax[i]) - height[i];

            water = max(0, water);

            result += water;
        }
        
        return result;
    }
};