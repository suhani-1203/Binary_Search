class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s==t)
            return true;
        int i=0,j=0;
        int sLen=s.length();
        int tLen=t.length();
        if(sLen==0 && tLen!=0  ){
            return true;
        }
        while( i<tLen){
            if(s[j]==t[i]){
                i++;
                j++;
            }
            else{
                i++;
            }
            if(j==sLen){
                return true;
                break;
            }
        }
        return false;
    }
};