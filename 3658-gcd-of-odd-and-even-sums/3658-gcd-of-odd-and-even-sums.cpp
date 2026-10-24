class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int evensum=0,oddsum=0;
        for(int i=1;i<=n;i++){
                evensum+=2*i;
                oddsum+=2*i-1;
        }
        return gcd(evensum,oddsum);
    }
};