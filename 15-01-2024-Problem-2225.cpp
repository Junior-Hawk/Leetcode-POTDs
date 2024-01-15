class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_map<int,int> mp;
        for(int i=0;i<matches.size();i++)
        {
            int k=matches[i][1];
            mp[k]++;
        }
        vector<int> v1,v2;
        for(int i=0;i<matches.size();i++)
        {
           int win=matches[i][0];
           int loss=matches[i][1];
           if(mp.find(win)==mp.end()) 
           {
               v2.push_back(win);
               mp[win]=2;
           }
           if(mp[loss]==1)
           v1.push_back(loss);
        }
        sort(v2.begin(),v2.end());    
        sort(v1.begin(),v1.end());
        return {v2,v1};   
    }
};
