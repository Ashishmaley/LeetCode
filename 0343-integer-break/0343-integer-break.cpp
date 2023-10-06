class Solution {
public:
    int integerBreak(int n) {
    return (n<=3)?(n-1):(n%3==1?4*pow(3,(n-2)/3):pow(3,n/3)*(n%3==0?1:2));}
};