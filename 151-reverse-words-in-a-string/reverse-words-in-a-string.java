class Solution {
    public String reverseWords(String s) {
        String arr[] =  s.trim().split("\\s+");;
        StringBuffer ans = new StringBuffer("");
        for(int i=arr.length-1;i>=0;i--){
            ans.append(arr[i]);
            if(i!=0)
            ans.append(" ");
        }
        return ans.toString();
    }
}