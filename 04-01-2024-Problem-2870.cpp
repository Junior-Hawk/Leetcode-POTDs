class Solution {
public:
    int minOperations(vector<int>& nums) {
        int k=0;
        map<int,int> mp;
        for(auto x:nums){
            mp[x]++;
        }
        for(auto x:mp){
            if(x.second<2){
                return -1;
            }
            k += ((x.second+2)/3);
        }
        return k;
    }
};
