class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        sort(arr2.begin(),arr2.end());
        int count=0;
        for(int i=0;i<arr1.size();i++){
            int l=0,h=arr2.size()-1,mid;
             bool found = false;
            while(l<=h){
                mid=l+(h-l)/2;
                if(abs(arr1[i]-arr2[mid])<=d){
                    found=true;
                    break;
                }
                else if(arr2[mid]<arr1[i]){
                    l=mid+1;
                }
                else{
                    h=mid-1;
                }
            }
            if(found==0){
                count++;
            }
        }
        return count;
    }
};