//Problem Link:- https://leetcode.com/problems/a-number-after-a-double-reversal/
//Lvl:- Easy
class Solution {
public:
    bool isSameAfterReversals(int num) {
        string str=to_string(num);
        if(str.length()==1){
            return true;
        }
        int n=str.length();
        if(str[n-1]=='0'){
            return false;
        }
        return true;
    }
};
