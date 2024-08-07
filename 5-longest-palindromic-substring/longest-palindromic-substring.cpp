class Solution {
public:
    string longestPalindrome(string s) {
         string res="";
        int len=0;
        int x=s.length();
        for(int i=0;i<x;i++){
            int l=i,r=i;
            while((l>=0 && r<x) && s[l]==s[r]){
                if((r-l+1)>len){
                    len=r-l+1;
                    res=s.substr(l,len);
                }
                l--;
                r++;
            }
            l=i,r=i+1;
            while((l>=0 && r<x) && s[l]==s[r]){
                if((r-l+1)>len){
                    len=r-l+1;
                    res=s.substr(l,len);
                }
                l--;
                r++;
            }
        }
        return res;
    }
};