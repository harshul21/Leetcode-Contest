class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        set<int> s;
        for(int i=0;i<arr.size();i++){
            s.insert(arr[i]);
        }

        int n=1;
        int count=0;
        while(1){
            if(s.find(n)==s.end()){
                count++;
                if(count==k){
                    return n;
                }
            }
            n++;
        }
        return 0;
    }
};
