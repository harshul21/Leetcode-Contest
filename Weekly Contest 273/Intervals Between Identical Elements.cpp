//Problem Link:- https://leetcode.com/problems/intervals-between-identical-elements/
//Lvl:- Medium
class Solution {
public:
    vector<long long> getDistances(vector<int>& arr) {
        int sz=arr.size();
        vector<long long>pre(sz,0),suf(sz,0),ans(sz,0);
        unordered_map<int,vector<int>> mp;
        
        for(int i=0;i<sz;i++){
            mp[arr[i]].push_back(i);
        }
        
        for(auto it:mp){
            auto vec=it.second;
            for(int i=1;i<vec.size();i++){
                pre[vec[i]]=pre[vec[i-1]]+i*(long)(vec[i]-vec[i-1]);
            }
        }
        
        for(auto it:mp){
            auto vec=it.second;
            for(int i=vec.size()-2;i>=0;i--){
                suf[vec[i]]=suf[vec[i+1]]+ long(vec.size()-1-i)*(long)(vec[i+1]-vec[i]);
            }
        }
        
        for(int i=0;i<sz;i++){
            ans[i]=pre[i]+suf[i];
        }
        
        return ans;
    }
};
