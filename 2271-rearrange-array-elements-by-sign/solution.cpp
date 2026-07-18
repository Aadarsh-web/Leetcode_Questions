class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>v(n);
        int pos=0;
        int neg=1;
        for(int x:nums)
        {
            if(x<0)
            {
                v[neg]=x;
                neg+=2;
            }
            else
            {
                v[pos]=x;
                pos+=2;
            }
        }
        return v;
    }
};
