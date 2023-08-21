class Solution {
public:

    void solve(string digits,vector<string>& s,
    vector<string>& ans,int index,string& ansstr){
        if(index==digits.size()){
            ans.push_back(ansstr);
            return;
        }
        string letter=s[digits[index]-'0'];
        for(auto i:letter){
            ansstr.push_back(i);
            solve(digits,s,ans,index+1,ansstr);
            ansstr.pop_back();
        }
    } 
    vector<string> letterCombinations(string digits) {
        vector<string>s={
            "","","abc","def","ghi","jkl","mno","pqrs",
            "tuv","wxyz"
        };
        if(digits.empty())return {};
        vector<string>ans;
        string combi;
        solve(digits,s,ans,0,combi);
        return ans;
    }
};