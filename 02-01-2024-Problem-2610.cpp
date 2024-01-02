class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(auto val:nums){
            mp[val]++;
        }
        vector<vector<int>> ans;
        while(!mp.empty()){
            vector<int> tmp;
            for(auto it=mp.begin();it!=mp.end();){
                tmp.push_back(it->first);
                it->second--;
                if(it->second==0){
                    it = mp.erase(it);
                }
                else it++;
            }
            ans.push_back(tmp);
        }
        return ans;
    }
};