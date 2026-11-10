class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mpp;
        vector<vector<string>>ans;
        for(int i=0;i<strs.size();i++){
            string d=strs[i];
            sort(d.begin(),d.end());
            mpp[d].push_back(strs[i]);
        }
        for(auto it:mpp) ans.push_back(it.second);
        return ans;

    }
};
