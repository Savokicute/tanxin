#include<iostream>
using namespace std;
#include<unordered_map>

class Solution
{
public:
    int longestPalindrome(string s)
    {
        unordered_map<char, int>hashmap;
        //增强型for循环
        for (char c : s)
        {
            //hashmap[c]为存储的下标(作为另类的计数)
            hashmap[c]++;
        }
        //然后遍历哈希表,hs是迭代器
        int ans = 0;
        int odd = 0;
        for (auto hs : hashmap)
        {
            //取余   先取出偶数次构成回文，最后在随便加上一个奇数作为中心
            int count = hs.second % 2;
            //减去余数，即为向下取整:出现5次5%2==1，5-1=4
            ans = ans + hs.second - count;

            //若当前出现奇数次,只出现一次，最多奇数只能出现一次
            if (count == 1)
            {
                odd = 1;
            }

        }
        //最后结果就是偶数加上出现的奇数（0，1）
        return ans + odd;
    }
};