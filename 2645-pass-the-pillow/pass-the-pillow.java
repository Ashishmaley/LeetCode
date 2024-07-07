class Solution {
    public int passThePillow(int n, int time) {
        boolean isForward = true;
        int ans=1;
        while(time!=0){
            if(isForward&& ans<=n){
                if(ans==n){
                    isForward=!isForward;
                }else
                ans++;
            }
            if(!isForward&& ans>=1){
                if(ans==1){
                    isForward=!isForward;
                    ans++;
                }else
                ans--;
            }
            time--;
        }
        return ans;
    }
}