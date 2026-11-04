class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(),nums.end());
        int ans=0;

        for(int x:s){
            if(s.find(x-1)==s.end()){
                int curr=x;
                int cnt=1;
                while(s.find(curr+1)!=s.end()) {
                    cnt++;
                    curr++;
                }
                ans=max(cnt,ans);
            }
        }
        
        return ans;
    }
};
