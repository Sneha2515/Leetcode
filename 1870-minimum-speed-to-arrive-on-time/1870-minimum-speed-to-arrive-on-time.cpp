class Solution {
public:
    double check(vector<int>& dist,int m){
        double time=0.0;
        for(int i=0;i<dist.size()-1;i++){
            time += ceil((double)dist[i] / m);
        }
        time += (double)dist[dist.size()-1] / m;
        return time;
    }
    int minSpeedOnTime(vector<int>& dist, double hour) {
        int low=1,high=10000000,mid,res=-1;
        while(low<=high){
            mid=low+(high-low)/2;
            if(check(dist,mid)<=hour){
                res=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return res;
    }
};