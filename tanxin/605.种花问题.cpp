#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
//010010这种情况都不能种，两位数两位数判断这种方法不科学
//class Solution
//{
//public:
//    bool canPlaceFlowers(vector<int>& flowerbed, int n)
//    {
//        int len = flowerbed.size();
//        //先处理0，1情况
//        //若不种花，则为true
//        //若花田只有一个空位时候
//        if (len == 1)
//        {
//            if (flowerbed[0] == 0)
//            {
//                flowerbed[0] = 1;
//                n = n - 1;
//            }
//        }
//        //要种两朵及以上
//        else
//        {
//            //若为偶数，双指针  010010这种情况都不能种
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
//            //若size为奇数,则留下最后一个位置
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
//                    //此时已经到了末尾的前一个,若前一个没种，且最后一个也没中
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
        int count = 0;  //记录可种的花数
        for (int i = 0; i < len; i++)
        {
            //此时前面后面都为0，自己也为0，可以种植，但i==0时，i-1会越界，i=len-1时，i+1会越界，所以加到或者里面
            if (flowerbed[i] == 0 && (i == 0 || flowerbed[i - 1] == 0) && (i == len - 1 || flowerbed[i + 1] == 0))
            {
                count = count + 1;
                flowerbed[i] = 1;
            }
        }

        return count >= n;
    }
};