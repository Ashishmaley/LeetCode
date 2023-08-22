class Solution {
public:
    int divide(int dividend, int divisor) {
        int res=0;
        if(dividend==INT_MIN&&divisor==-1)return INT_MAX;
        if(dividend==INT_MIN&&divisor==1)return INT_MIN;
        long int dd=abs(dividend),dv=abs(divisor);
        while(dd>=dv){
            long int sum=dv,count=1;
            while(dd-sum>=sum){
                count+=count;
                sum+=sum;
            }
            dd-=sum;
            res+=count;
        }
        if((dividend<0&&divisor>0)||(dividend>0&&divisor<0)){
            return -res;
            }
        return res;
    }
    
};