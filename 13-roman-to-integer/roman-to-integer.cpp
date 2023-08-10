class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> ump={
             {'M',1000},
             {'D',500},
             {'C',100},
             {'L',50},
             {'X',10},
             {'V',5},
             {'I',1}
        };
        int ans=0;
        for(int i=0;i<s.size();i++){
            if(ump[s[i]]<ump[s[i+1]]){
                ans=(ans-ump[s[i]])+ump[s[i+1]];
                i++;
            }else
            {
                ans+=ump[s[i]];
            }
        }return ans; 
    }
};