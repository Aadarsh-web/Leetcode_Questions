class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int XOR1=0;
        int XOR2=0;
        for(int i=0;i<nums.size();i++)
        {
            XOR1=XOR1^nums[i];
            XOR2=XOR2^i;
        }
        XOR2=XOR2^nums.size();
        int ans=XOR1^XOR2;
        return ans;
    }
};
