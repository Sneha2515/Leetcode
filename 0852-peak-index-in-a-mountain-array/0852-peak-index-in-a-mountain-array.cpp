class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int l=0,h=arr.size()-1,m,ans=0;
        while(l<h){
            m=l+(h-l)/2;
            if(arr[m-1]<arr[m] && arr[m+1]<arr[m]){
                    l++;
                    ans=m;
            }
            else if(arr[m+1]>arr[m]){
                l=m+1;
            }
            else{
                h=m;
           }
        }
        return ans;
    }
};