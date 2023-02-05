bool vowel(char r){
    return r=='a'||r=='e'||r=='i'||r=='u'||r=='o';
} 

class Solution {
public:
    vector<int> vowelStrings(vector<string>& w, vector<vector<int>>& v) {
         vector<int>ans;
        vector<int>an(w.size()+1);
        for(int i=0;i<w.size();i++)
        {
            int curr=vowel(w[i][0])&&vowel(w[i].back());
            an[i+1]=an[i]+curr;
        }
        for(int i=0;i<v.size();i++)
        {
            int count=an[v[i][1]+1]-an[v[i][0]];
            ans.push_back(count);
        }
        return ans;
        
    }
};
