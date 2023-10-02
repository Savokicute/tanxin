#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

class Solution
{
public:
    int findContentChildren(vector<int>& g, vector<int>& s)
    {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int ig = g.size();
        int is = s.size();
        int sum = 0;
        //遍历孩子胃口
        for (int i = 0, j = 0; i < ig && j < is; i++, j++)
        {
            //排序完后，若尺寸连前面的孩子都满足不了，那么后面肯定也满足不了
            //若胃口大于尺寸，则无法满足
            //要懂得用while
            while (j<is && g[i] > s[j])
            {
                j++;  //则继续比较下一个尺寸
            }
            //若退出循环，若是满足胃口了
            if (j < is)
            {
                sum = sum + 1;
            }
        }
        return sum;
    }
};