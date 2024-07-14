class Solution {
    public int compress(char[] chars) {
        int n=chars.length;
        int count=1;
        StringBuffer str = new StringBuffer("");
        for(int i=1;i<n;i++){
            if(chars[i]==chars[i-1]){
                count++;
            }else{
                str.append(chars[i-1]);
                if(count>1){
                    str.append(count);
                }
                count=1;
            }
        }
        str.append(chars[n-1]);
        if(count>1){
            str.append(count);
        }
        for(int i=0;i<str.length();i++){
            chars[i] = str.charAt(i);
        }
        return str.length();
    }
}