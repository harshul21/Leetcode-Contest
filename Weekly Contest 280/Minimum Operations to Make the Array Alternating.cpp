//Problem Link:- https://leetcode.com/problems/minimum-operations-to-make-the-array-alternating/
//Lvl:- Medium(Towards Hard more)
class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int totalEven=0, totalOdd=0;
        unordered_map<int,int> mapEven, mapOdd;
        
        for(int i=0;i<nums.size();i++){
            if(i%2==0){
                totalEven++;
                mapEven[nums[i]]++;
            }
            else{
                totalOdd++;
                mapOdd[nums[i]]++;
            }
        }
        
        int firstEvenCount=0, firstEven=0;
        int secondEvenCount=0, secondEven=0;
        
        for(auto it=mapEven.begin();it!=mapEven.end();it++){
            int num=it->first;
            int count=it->second;
            
            if(count>=firstEvenCount){
                secondEvenCount=firstEvenCount;
                secondEven=firstEven;
                firstEvenCount=count;
                firstEven=num;
            }
            else if(count>=secondEvenCount){
                secondEvenCount=count;
                secondEven=num;
            }
        }
        
        int firstOddCount=0, firstOdd=0;
        int secondOddCount=0, secondOdd=0;
        
        for(auto it=mapOdd.begin();it!=mapOdd.end();it++){
            int num=it->first;
            int count=it->second;
            
            if(count>=firstOddCount){
                secondOddCount=firstOddCount;
                secondOdd=firstOdd;
                firstOddCount=count;
                firstOdd=num;
            }
            else if(count>=secondOddCount){
                secondOddCount=count;
                secondOdd=num;
            }
        }
        
        int operationEven=0, operationOdd=0;
        
        operationEven = totalEven - firstEvenCount;
        if(firstEven!=firstOdd){
            operationEven+=(totalOdd-firstOddCount);
        }
        else{
            operationEven+=(totalOdd-secondOddCount);
        }
        
        operationOdd = totalOdd - firstOddCount;
        if(firstEven!=firstOdd){
            operationOdd+=(totalEven-firstEvenCount);
        }
        else{
            operationOdd+=(totalEven-secondEvenCount);
        }
        
        return min(operationEven,operationOdd);
    }
};
