//Problem Link:- https://www.codingninjas.com/codestudio/contests/codestudio-weekend-contest-9/problems/16812
//Lvl:- Easy
int minimumDistancePairs(int n, vector<int> &arr) {
    // Write your code here.
    sort(arr.begin(),arr.end());
    int mnd=INT_MAX;
    for(int i=0;i<arr.size()-1;i++){
        mnd=min(mnd,abs(arr[i]-arr[i+1]));
    }
    int count=0;
    for(int i=0;i<arr.size()-1;i++){
        for(int j=i+1;j<arr.size();j++){
            if(abs(arr[i]-arr[j])==mnd){
                count++;
            }
            if(abs(arr[i]-arr[j])>mnd){
                break;
            }
        }
    }
    return count;
}
