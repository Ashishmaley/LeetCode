class Solution {
public:
    int minimumPartition(string s, int k) {
        int count=0;
        string r;
        for(int i=0;i<s.size();i++)
        {
            r.push_back(s[i]);
            if(stol(r)>k)
            { 
               r="";
                r.push_back(s[i]);
                if(stol(r)>k)
                    return -1;
                count++;
            } 
        }
        return count+1;
    }
};
