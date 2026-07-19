class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>s(nums.begin(),nums.end());
        int cnt=1;
        int largest=0;
        for(int x:s)
        {
            if(s.find(x-1)==s.end())
            {
                int curr=x;
                cnt=1;
                while(s.find(curr+1)!=s.end())
                {
                    cnt++;
                    curr++;
                }
                largest=max(largest,cnt);
            }
        }
        return largest;
    }
};
