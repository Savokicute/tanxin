#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
//010010��������������֣���λ����λ���ж����ַ�������ѧ
//class Solution
//{
//public:
//    bool canPlaceFlowers(vector<int>& flowerbed, int n)
//    {
//        int len = flowerbed.size();
//        //�ȴ���0��1���
//        //�����ֻ�����Ϊtrue
//        //������ֻ��һ����λʱ��
//        if (len == 1)
//        {
//            if (flowerbed[0] == 0)
//            {
//                flowerbed[0] = 1;
//                n = n - 1;
//            }
//        }
//        //Ҫ�����估����
//        else
//        {
//            //��Ϊż����˫ָ��  010010���������������
//            if (len % 2 == 0)
//            {
//                for (int i = 0, j = i + 1; i < len, j < len; i = i + 2, j = j + 2)
//                {
//                    if ( (flowerbed[i] == 0 && flowerbed[j] == 0) && flowerbed[i-1] == 0 )
//                    {
//                        flowerbed[i] = 1;
//                        n = n - 1;
//                    }
//                }
//            }
//            //��sizeΪ����,���������һ��λ��
//            else
//            {
//                for (int i = 0, j = i + 1; i < len - 1, j < len - 1; i = i + 2, j = j + 2)
//                {
//
//                    if (flowerbed[i] == 0 && flowerbed[j] == 0)
//                    {
//                        flowerbed[i] = 1;
//                        n = n - 1;
//                    }
//                    //��ʱ�Ѿ�����ĩβ��ǰһ��,��ǰһ��û�֣������һ��Ҳû��
//                    if (j == len - 2)
//                    {
//                        if (flowerbed[j] == 0 && flowerbed[j + 1] == 0)
//                        {
//                            flowerbed[j + 1] = 1;
//                            n = n - 1;
//                        }
//                    }
//                }
//            }
//        }
//
//        if (n <= 0)
//        {
//            return true;
//        }
//        else
//        {
//            return false;
//        }
//    }
//};

class Solution
{
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n)
    {
        int len = flowerbed.size();
        int count = 0;  //��¼���ֵĻ���
        for (int i = 0; i < len; i++)
        {
            //��ʱǰ����涼Ϊ0���Լ�ҲΪ0��������ֲ����i==0ʱ��i-1��Խ�磬i=len-1ʱ��i+1��Խ�磬���Լӵ���������
            if (flowerbed[i] == 0 && (i == 0 || flowerbed[i - 1] == 0) && (i == len - 1 || flowerbed[i + 1] == 0))
            {
                count = count + 1;
                flowerbed[i] = 1;
            }
        }

        return count >= n;
    }
};