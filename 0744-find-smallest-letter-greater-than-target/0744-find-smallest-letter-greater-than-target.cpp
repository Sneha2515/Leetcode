class Solution {
public:
    char nextGreatestLetter(vector<char>& v, char target) {
         int l=0,h=v.size()-1,mid;
         char s=v[0];
         while(l<=h){
            mid=l+(h-l)/2;
            if(v[mid]<=target){
                l=mid+1;
            }
            else{
                s=v[mid];
                h=mid-1;
            }
         }
         return s;
    }
};