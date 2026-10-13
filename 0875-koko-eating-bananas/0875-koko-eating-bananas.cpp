class Solution {
public:
    long long check(vector<int>&piles,int s){
        long long h1=0;
        for(int i=0;i<piles.size();i++){
            h1+=ceil((double )piles[i]/s);
        }
        return h1;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int l=1,hi=1000000000,m,res=-1;
        while(l<=hi){
            m=l+(hi-l)/2;
            if(check(piles,m)<=h){
                res=m;
                hi=m-1;
        }
            else{
                l=m+1;
            }
        }
            return res;
    }
};