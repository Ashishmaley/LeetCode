class Solution {
    public int lengthOfLongestSubstring(String s) {
        if(s.isEmpty())return 0;
        HashSet<Character>st = new HashSet<>();
        int ans=0,i=0,j=0;
        while(j<s.length()){
            if(st.isEmpty()){
                st.add(s.charAt(j));
                ans=Math.max(ans,1);
                j++;
            }
            else{
                int iniLen = st.size();
                st.add(s.charAt(j));
                if(st.size()==iniLen){
                    while(i<s.length()&&s.charAt(i)!=s.charAt(j)){
                        st.remove(s.charAt(i));
                        i++;
                    }
                    st.add(s.charAt(j));
                    i++;
                    j++;
                }
                else {
                    ans=Math.max(ans,j-i+1);
                    j++;
                }
            }

        }
        return ans;
    }
}