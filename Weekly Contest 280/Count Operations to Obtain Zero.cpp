//Problem Link:- https://leetcode.com/problems/count-operations-to-obtain-zero/
//Lvl:-Easy
class Solution {
public:
    int countOperations(int num1, int num2) {
        int count=0;
        while(num1!=0 and num2!=0){
            if(num1>=num2){
                num1-=num2;
                count++;
            }
            else{
                num2-=num1;
                count++;
            }
        }
        return count;
    }
};
