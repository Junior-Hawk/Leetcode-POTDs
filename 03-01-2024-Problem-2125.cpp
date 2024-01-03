class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int m = bank.size();
        int n = bank[0].length();
        int ans=0,k=0;
        for(int i=0;i<m;i++){
            int c=0;
            for(int j=0;j<n;j++){
                if(bank[i][j]=='1'){
                    c++;
                }
            }
                ans += k*c;
                if(c>0) k=c;
            
        }
        return ans;
    }
};