class Solution {
public:
    bool canConvertString(string s, string t, int k) {
        if(s.length()!=t.length()){
            return false;
        }
        int mult[26]={};
        int n=s.length();
        for(int i=0;i<n;i++){
            int shift=t[i]-s[i]+(t[i]<s[i]?26:0);
            if(shift!=0 and shift+mult[shift]*26>k){
                return false;
            }
            ++mult[shift];
        }
        return true;
    }
};
