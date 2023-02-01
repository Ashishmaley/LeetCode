#include<bits/stdc++.h>
class Solution {
public:
    string removeDigit(string n, char d) {
        for (int i=0;i<n.length()-1;i++)
           { 
            if(d<n[i+1]&&n[i]==d)
            { 
                n.erase(i,1);
                return n;
            }
        }
        int last=n.find_last_of(d);
        n.erase(last,1);
        return n;
        }
    
};
