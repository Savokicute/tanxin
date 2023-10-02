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
        //��������θ��
        for (int i = 0, j = 0; i < ig && j < is; i++, j++)
        {
            //����������ߴ���ǰ��ĺ��Ӷ����㲻�ˣ���ô����϶�Ҳ���㲻��
            //��θ�ڴ��ڳߴ磬���޷�����
            //Ҫ������while
            while (j<is && g[i] > s[j])
            {
                j++;  //������Ƚ���һ���ߴ�
            }
            //���˳�ѭ������������θ����
            if (j < is)
            {
                sum = sum + 1;
            }
        }
        return sum;
    }
};