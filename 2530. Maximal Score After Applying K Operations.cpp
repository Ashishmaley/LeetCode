class Solution {
public:
    long long maxKelements(vector<int>& v, int k) {
        long long ans=0;
        priority_queue<int>pq;
        for(int i=0;i<v.size();i++)
            pq.push(v[i]);
        while(k--)
        {
            int temp=pq.top();
            pq.pop();
            ans+=temp;
            pq.push((temp+2)/3);
        }
            return ans;
        }
    
};
