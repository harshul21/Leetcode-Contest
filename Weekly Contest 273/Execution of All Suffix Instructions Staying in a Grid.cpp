//Problem Link:- https://leetcode.com/problems/execution-of-all-suffix-instructions-staying-in-a-grid/
//Lvl:- Medium
class Solution {
public:
    
    int isSteps(int count,int x,int y,string s,int n,int start,int end){
        int row=x;
        int col=y;
        //cout<<dx<<" "<<dy;
        for(int i=start;i<end;i++){
            
            if(s[i]=='U'){
                row--;
                //cout<<dy<<endl;
                if(row>=0 and col>=0 and row<n and col<n){
                    count++;
                }
                else{
                    break;
                }
            }
            if(s[i]=='L'){
                col--;
                //cout<<dx<<endl;
                if(row>=0 and col>=0 and row<n and col<n){
                    count++;
                }
                else{
                    break;
                }
            }
            if(s[i]=='R'){
                col++;
                //cout<<dx<<endl;
                if(row>=0 and col>=0 and row<n and col<n){
                    count++;
                }
                else{
                    break;
                }
            }
            if(s[i]=='D'){
                row++;
                //cout<<dy<<endl;
                if(row>=0 and col>=0 and row<n and col<n){
                    count++;
                }
                else{
                    break;
                }
            }
           
            
        }
        // cout<<count<<endl;
        return count;
    }
    vector<int> executeInstructions(int n, vector<int>& startPos, string s) {
        int m=s.length();
        vector<int> ans(m,0);
        for(int i=0;i<s.length();i++){
            ans[i]=isSteps(0,startPos[0],startPos[1],s,n,i,m);
            //cout<<endl;
           
        }
        return ans;
    }
};
