class Solution {
public:
    vector<int> generateRows(int n)
    {
        vector<int> rn;
        rn.push_back(1);
        int ans=1;
        for(int col=1;col<n;col++)
        {
            ans=ans*(n-col);
            ans=ans/col;
            rn.push_back(ans);
        }
        return rn;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i=1;i<=numRows;i++)
        {
            ans.push_back(generateRows(i));
        }
        return ans;
    }
};
