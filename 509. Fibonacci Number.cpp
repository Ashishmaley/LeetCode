int fibo(int n){
    if(n==1||n==0)
     return n;
    int arr[n+1];
     arr[0]=0;
     arr[1]=1;
for(int i=2;i<=n;i++)
 {
     arr[i]=arr[i-1]+arr[i-2];
 }
 return arr[n];
}
class Solution {
public:
    int fib(int n) {
        int ans=fibo(n);
        // cout<<ans;
    return ans;
    }

};
