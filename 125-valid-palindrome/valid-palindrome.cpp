class Solution {
public:
    bool isPalindrome(string s) {
        string r="";
        for(auto c:s){
            if(isalnum(c))
            r+=tolower(c);
        }
        int l=r.length();
        int k=l;
        for(int i=0;i<l/2;i++){
            if(r[i]!=r[l-1-i])
            return 0;
            
        }
        return 1;
    }
};