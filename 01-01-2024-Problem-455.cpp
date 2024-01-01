class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        if(s.size()==0) return 0;
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int i=g.size()-1,j=s.size()-1,c=0;
        while(i>=0 && j>=0){
            if(g[i]<=s[j]){
                i--;
                j--;
                c++;
            }
            else{
                i--;
            }
        }
        return c;
    }
};
