class Solution {
public:
    int minSteps(string s, string t) {
        vector<int> mp(26,0);
        for(auto x:s){
            mp[x-'a']++;
        }
        int c=0;
        for(auto x:t){
            if(mp[x-'a']>0){
                mp[x-'a']--;
            }
            else c++;
        }
        return c;
    }
};
