class Solution {
    public int maxProfit(int[] prices) {
        int ans=0;
        int mini=Integer.MAX_VALUE;
        for(int i=0;i<prices.length;i++){
            mini= Math.min(mini,prices[i]);
            if(prices[i]>mini){
                ans=Math.max(prices[i]-mini,ans);
            }
        }
        return ans;
    }
}