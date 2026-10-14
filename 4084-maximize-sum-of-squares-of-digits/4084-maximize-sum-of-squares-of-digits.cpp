class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        if (sum<1 || sum>9*num) {
            return "";
        }

        string s="";
        for (int i=0;i<num;i++) {
            int d=min(9,sum);
            s+=to_string(d);
            sum-=d;
        }
        return s;
    }
};