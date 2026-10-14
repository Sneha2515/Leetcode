class Solution {
public:
    int check(vector<int>& weights, int m) {
    int sum = 0, days = 1;
    for (int i = 0; i < weights.size(); i++) {
        if (sum + weights[i] > m) {
            days++;
            sum = weights[i];
        }
        else {
            sum += weights[i];
        }
    }

    return days;
}
    int shipWithinDays(vector<int>& weights, int days) {
        int l = *max_element(weights.begin(), weights.end());
        int h = 0;
        for (int w : weights) h += w;
        int mid,res=-1;
        while(l<=h){
            mid=l+(h-l)/2;
            if(check(weights,mid)<=days){
                res=mid;
                h=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return res;
    }
};