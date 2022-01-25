//Problem Link:-https://leetcode.com/problems/minimum-subsequence-in-non-increasing-order/
class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        int n=nums.size();
        if(n==1){
            return nums;
        }
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        sort(nums.begin(),nums.end());
        vector<int> ans;
        int sum1=0;
        for(int i=n-1;i>=0;i--){
            sum-=nums[i];
            sum1+=nums[i];
            ans.push_back(nums[i]);
            if(sum1>sum){
                return ans;
            }
        }
        return ans;
        
    }
};
