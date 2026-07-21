class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int>mpp;
        mpp[0]=1;
        int PrefixSum=0;
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            PrefixSum+=nums[i];
            int need=PrefixSum-k;

            //Storing the number of times that element has been found
            if(mpp.find(need)!=mpp.end())
            cnt=cnt+mpp[need];

            //Storing the current prefixSum
            mpp[PrefixSum]++;
        }
        return cnt;
    }
};
