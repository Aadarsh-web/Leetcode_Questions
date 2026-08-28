class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n=nums.size();
        if(n<2) return nums;
        vector<int> ans;
        unordered_map<int,int>mpp;
        for(int i=0;i<n;i++){
            mpp[nums[i]]++;
            //Duplicate Number
            if(mpp[nums[i]]>1) ans.push_back(nums[i]);
        }
        //Missing Number
        for(int i=1;i<=n;i++){
            auto it=mpp.find(i);
            if(mpp.find(i)==mpp.end()) ans.push_back(i);
        }
        return ans;
    }
};
