//Problem Link:- https://www.codingninjas.com/codestudio/contests/codestudio-weekend-contest-9/problems/16789?leftPanelTab=0
//Lvl:-Medium
//Time Complexity:- O(N)
int totalPairs(int N, vector<int> A, vector<int> B)
{
	for(int i=0;i<N;i++){
        A[i]-=B[i];
    }
    sort(A.begin(),A.end());
    int ans=0;
    for(int i=0;i<N;i++){
       
        ans+=A.end()-upper_bound(A.begin(),A.end(),-A[i]);
        
        if(A[i]>0){
            ans--;
        }
    }
    return ans/2;
}
