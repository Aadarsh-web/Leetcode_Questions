#include <vector>
#include <iostream>
using namespace std;
class Solution {
public:
    vector<int> twoSum(std::vector<int>& nums, int target) {
        int t;
        int len;
        len=nums.size();
        for(int i=0; i<len; i++)
        {
            for(int j= i+1; j<len; j++)
            {
                t=nums[i]+nums[j];
                if(t==target)
                {
                    return{i,j};
                    break;
                }
            }
        }
        return {};
        
    }
};


