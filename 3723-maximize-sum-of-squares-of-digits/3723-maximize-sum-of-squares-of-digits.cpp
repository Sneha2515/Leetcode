class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        string str="";
        for(int i=0;i<num;i++){
            if(sum>9){
                str+=to_string(9);
                sum=sum-9;
            }
            else{
                str+=to_string(sum);
                sum=sum-sum;
            }
        }
        if(sum>0){
             return"";
        }
        return str;
    }
};