class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int>v;
        v.push_back(1);
        int row=0;
        while(row<rowIndex){
            vector<int>curr;
            curr.push_back(1);
            for(int j=1;j<v.size();j++){
                int s=v[j-1]+v[j];
                curr.push_back(s);
            }
             curr.push_back(1);
             v=curr;
             row++;
        }
        return v;
    }
};