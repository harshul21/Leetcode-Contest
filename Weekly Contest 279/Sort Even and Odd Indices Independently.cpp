//Problem Link:- https://leetcode.com/problems/sort-even-and-odd-indices-independently/
//Lvl-Easy
class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        priority_queue<int> pqo;
        priority_queue<int,vector<int>,greater<int>> pqe;
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
            if(i%2==0){
                pqe.push(nums[i]);
            }
            else{
                pqo.push(nums[i]);
            }
        }

        for(int i=0;i<n;i++){
            if(i%2==0){
                nums[i]=pqe.top();
                pqe.pop();
            }
            else{
                nums[i]=pqo.top();
                pqo.pop();
            }
        }
        return nums;
    }
};
