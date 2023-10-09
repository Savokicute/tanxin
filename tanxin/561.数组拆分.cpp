#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

//从小到大排序，依次两两组合，最大的总要被舍下，那么尽量去保留第二大的
class Solution
{
public:
    int arrayPairSum(vector<int>& nums)
    {
        int sum = 0;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i = i + 2)
        {
            sum = sum + nums[i];
        }
        return sum;
    }
};
