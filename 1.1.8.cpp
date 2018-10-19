/***********************************************************************
*
*文件名：1.1.8.cpp
*
*文件描述：写个函数，返回指定数在有序list中的位置，使用二分查找（折半查找实现）
*
*创建人：凡定坤
*
*时间：2018-7-17
*
*版本号：1.0
*
*修改记录：
*
***********************************************************************/

/*
*函数名：bubbleSort
*
*参数：
*     [int *] arr :数组
*     [int] n : 数组长度
*功能描述：使用冒泡排序方法将数组从小到大排序
*
*返回值：无返回值
*
*抛出异常
*
*作 者：凡定坤 2018-7-17
*/

/*===============================================================
*函数名：binarySearch
*
*参数：
*     [int *] arr :数组
*     [int] key: 指定值
*     [int] n : 数组长度
*功能描述：利用二分法来找出指定值的下标
*
*返回值：正确：返回下标 错误：返回-1
*
*抛出异常
*
*作 者：凡定坤 2018-7-17
===============================================================*/

/*===============================================================
*函数名：prints
*
*参数：
*     [int *] arr :数组
*     [int] n : 数组长度
*功能描述：遍历输出当前数组
*
*返回值：无返回值
*
*抛出异常
*
*作 者：凡定坤 2018-7-17
===============================================================*/
#include <iostream>
#include <algorithm>
#include <numeric>
#include <time.h>
using namespace std;

/*冒泡排序*/
void bubbleSort (int * arr, int n);

/*遍历数组*/
void prints (int * arr, int n);

/*二分查找*/
int binarySearch (int * arr, int key, int n);
int main()
{
    int n = 10;
    srand(time(NULL));
    int arr[n];

    /*随机生成一个数组*/
    for (int i = 0; i < n; i++)
    {
        int u = (double)rand() / (RAND_MAX + 1) * (100 - 1) + 1;
        arr[i] = u;
    }

    cout << "---------排序前---------" << endl;

    /*排序前输出*/
    prints(arr, n);
    int key = arr[3];

    /*对生成的数组进行排序*/
    bubbleSort (arr, n);

    cout << "---------排序后---------" << endl;

    /*排序后输出*/
    prints(arr, n);

    int i = binarySearch (arr, key, n);
    cout << key << "所在位置的下标为：" << i << endl;
    return 0;
}

/*冒泡排序*/
void bubbleSort (int * arr, int n)
{
    /*外层循环控制趟数*/
    for (int i = n - 1; n > 0; n--)
    {
        /*内层循环控制比较次数*/
        for(int j = 0; j < i ; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

/*遍历数组*/
void prints (int * arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

/*二分查找*/
int binarySearch (int * arr, int key, int n)
{
    int begin = 0;
    int end = n -1;
    int result = -1;
    while (begin <= end)
    {
        /*确定中间值的下标*/
        int mid = (end - begin) / 2 + begin;

        /*如果中间值比指定值大从数组的左边开始继续找*/
        if (arr[mid] > key)
        {
            end = mid - 1;
        }

        /*如果中间值比指定值小从数组的右边开始继续找*/
        else if (arr[mid] < key)
        {
            begin = mid + 1;
        }
        else
        {
            result = mid;
            break;
        }
    }
    return result;
}
