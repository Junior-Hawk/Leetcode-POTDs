class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int dup=-1,c=0;
        long long sum = nums[0];
        for(int i=1;i<n;i++){
            if(nums[i] == nums[i-1]){
                dup = nums[i];
            }
            sum += nums[i];
        }
        sum -= (n*(n+1)/2);
        return {dup,dup-int(sum)};
        
    }
};
