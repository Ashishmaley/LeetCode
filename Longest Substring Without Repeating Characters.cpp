class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char>a;
        int end=0,start=0,max=0;
        while(start<s.size())
        {
            if(a.find(s[start])==a.end())
            {a.insert(s[start]);
            if(max<start-end+1)
            max=start-end+1;
            start++;
            }
            else{
                a.erase(s[end]);
                end++;
            }
        }
        return max;
    }

};
