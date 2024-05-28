class Solution {
public:
    string convert(string s, int n) {
        if(n==1)return s;
        vector<vector<char>>v(n);
        int play=0;
        bool down=true;
        for(int i=0;i<s.size();i++){
            if(down){
                v[play].push_back(s[i]);
                if(play==n-1&&down==true){
                    down = false;
                    play--;
                }
                else
                play++;
            }
            else{
                v[play].push_back(s[i]);
                if(play==0&&down!=true){
                    down = true;
                    play++;
                }else 
                play--;
            }
        }
        string ans = "";
            for(auto ele:v){
                string str = "";
                for (auto ch : ele) {
                    str += ch; 
                }
                ans += str;
            }
        return ans;
    }
};