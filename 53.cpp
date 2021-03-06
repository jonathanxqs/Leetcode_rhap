class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int ans=nums[0],i,j,sum=0;
        for(i=0;i<n;i++){
            sum+=nums[i];
            ans=max(sum,ans);
            sum=max(sum,0);
        }
        return ans;
    }

    public int maxSubArray(int[] A) {
        int n = A.length;
        int[] dp = new int[n];//dp[i] means the maximum subarray ending with A[i];
        dp[0] = A[0];
        int max = dp[0];
        
        for(int i = 1; i < n; i++){
            dp[i] = A[i] + (dp[i - 1] > 0 ? dp[i - 1] : 0);
            max = Math.max(max, dp[i]);
        }
        
        return max;
    }


};



