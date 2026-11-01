class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }

        vector<pair<int,int>>vec (mpp.begin(),mpp.end());
        vector<int>ans;

        sort(vec.begin(),vec.end(), [](const auto& a, const auto& b) {
        return a.second > b.second; });

        for(int i=0;i<k;i++){
            ans.push_back(vec[i].first);
        }

        return ans;
    }
};
