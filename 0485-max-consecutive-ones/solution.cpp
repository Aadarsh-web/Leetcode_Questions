class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt=0;
        int l=0;
        for(int i=0;i<nums.size(); i++)
        {
            if(nums[i]==1)
            {
                cnt+=1;
            }
            else
            {
                if(cnt>l)
                l=cnt;
                cnt=0;
            }
            if(cnt>l)
            l=cnt;
        }
        return l;
    }
};
