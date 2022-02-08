//Problem Link:- https://leetcode.com/problems/smallest-value-of-the-rearranged-number/
//Lvl:- Medium
class Solution {
public:
    long long smallestNumber(long long num) {
        if(num==0){
            return 0;
        }
        long long fans=0;
        if(num<0){
            num=-num;
            vector<long long> ans;
            while(num){
                ans.push_back(num%10);
                num=num/10;
            }
            if(ans.size()==1){
                return -num;
            }
            sort(ans.begin(),ans.end());
            for(int i=ans.size()-1;i>=0;i--){
                fans=ans[i]+fans*10;
            }
            return -fans;
        }
        vector<long long> ans;
        int flag=0;
        while(num){
            ans.push_back(num%10);
            num=num/10;
        }
        
        if(ans.size()==1){
            return num;
        }
        sort(ans.begin(),ans.end());
        if(ans[0]==0){
            flag=1;
        }
        int i=0;
        if(flag==1){
            while(ans[i]==0){
            i++;
            }
        }
        int j=0;
        if(flag==1){
            fans=ans[i];
            j=i+1;
        }
        while(i!=0){
            fans=0+fans*10;
            i--;
        }
        for(int count=j;count<ans.size();count++){
            fans=ans[count]+fans*10;
        }
        return fans;
    }
};
