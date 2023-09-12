class Solution {
public:
    int minDeletions(string s) {
        unordered_map<char,int> cnt;
        int deletions = 0;
        unordered_set<int>usedF;
        for(char c:s){
            cnt[c]++;
        }
        for(auto&kv:cnt){
            int freq=kv.second;
            while(freq>0&&usedF.find(freq)!=usedF.end()){
                freq--;
                deletions++;
            }
            usedF.insert(freq);
        }
        return deletions;
    }
};