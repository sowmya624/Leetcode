class Solution {
public:
    string reverseWords(string s) {
        
        int r=s.size();
        int m=r;
        string ans="";
        string temp="";
        for(int i=0;i<m;i++){
           
            if(s[i]!=' ')
            temp=temp+s[i];
            else if(i + 1 < m && s[i]== ' ' && s[i + 1] == ' ' && temp!=""){
                if(ans=="")
                    ans=temp;
                else
                {
                    ans=temp+" "+ans;
                    
                }
                    
                temp="";
                i++;
            }
            else {
                if(temp!=""){
                if(ans=="")
                    ans=temp;
                else
                    ans=temp+" "+ans;
                temp="";
                }
            }
        }
        if(temp!=""){
           
            if(ans!="")
            ans=temp+" "+ans;
            else
            ans=temp;
            
        }
           return ans;
    
    }
};