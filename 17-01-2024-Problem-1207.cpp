class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        vector<int> ans;
        int c=1;
        for(int i=1;i<arr.size();i++){
            if(arr[i]==arr[i-1]){
                c++;
            }
            else{
                ans.push_back(c);
                c=1;
            }
        }
        ans.push_back(c);
        sort(ans.begin(),ans.end());
        for(int i=0;i<ans.size()-1;i++){
            if(ans[i]==ans[i+1]) return false;
        }
        return true;
    }
};
