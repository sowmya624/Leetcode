class Solution {
public:
    void merge(vector<int>& nums1, int p, vector<int>& nums2, int n) {
        
        int l=p-1;
        int m=0;
        while(l>=0 && m<n){
            if(nums1[l]>nums2[m]){
                int x=nums1[l];
                nums1[l]=nums2[m];
                nums2[m]=x;
                l--;
                m++;
            }
            else
            break;
        }
        
        for(int i=p,j=0;i<n+p,j<n;i++,j++)
        nums1[i]=nums2[j];
        sort(nums1.begin(),nums1.end());
    }
};