#include<iostream>
using namespace std;
#include<unordered_map>

class Solution
{
public:
    int longestPalindrome(string s)
    {
        unordered_map<char, int>hashmap;
        //��ǿ��forѭ��
        for (char c : s)
        {
            //hashmap[c]Ϊ�洢���±�(��Ϊ����ļ���)
            hashmap[c]++;
        }
        //Ȼ�������ϣ��,hs�ǵ�����
        int ans = 0;
        int odd = 0;
        for (auto hs : hashmap)
        {
            //ȡ��   ��ȡ��ż���ι��ɻ��ģ������������һ��������Ϊ����
            int count = hs.second % 2;
            //��ȥ��������Ϊ����ȡ��:����5��5%2==1��5-1=4
            ans = ans + hs.second - count;

            //����ǰ����������,ֻ����һ�Σ��������ֻ�ܳ���һ��
            if (count == 1)
            {
                odd = 1;
            }

        }
        //���������ż�����ϳ��ֵ�������0��1��
        return ans + odd;
    }
};