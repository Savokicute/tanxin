#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

//��С������������������ϣ�������Ҫ�����£���ô����ȥ�����ڶ����
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
