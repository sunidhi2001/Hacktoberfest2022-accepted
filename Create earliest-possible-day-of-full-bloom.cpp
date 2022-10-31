class Solution {
public:
   static  bool comp(pair<int,int>a, pair<int,int>b)
    {
        return a.second>b.second;
    }

    int earliestFullBloom(vector<int>& plantTime, vector<int>& growTime) {
        int n = plantTime.size();
        vector<pair<int,int>>v(n);
        for(int i=0; i<n ; i++)
        {
            v.push_back({plantTime[i], growTime[i]});
        }
        sort(v.begin(), v.end(), comp);
        int start =0, ans =0;
        for(int i=0; i<n; i++)
        {
            start+=v[i].first;
            ans = max(ans, start+v[i].second);
        }
        return ans ;
    }
};
