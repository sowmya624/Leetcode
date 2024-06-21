class Solution {
public:
    
    int uniquePaths(int m, int n) {
        int N=m+n-2;
        int f=m-1;
        double r=1;
        
        for(int i=1;i<=f;i++){
            r=r*(N-f+i)/i;
        }
        return (int)r;
    }
};