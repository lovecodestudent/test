/****************************************************************
*
*文件名：1.1.11.cpp
*
*文件描述：写个函数合并两个有序的列表
*创建人：凡定坤
*
*时间：2018-7-18
*
*版本号：1.1
*
*修改记录：在比较两个数组元素的大小时，循环中的条件判断有误。下标和长度不一致
*
****************************************************************/

/*===============================================================
*函数名：arr
*
*参数：
*     [int] n : 数组的长度
*功能描述：随机生成一个数组
*
*返回值：正确：返回一个数组 错误：报错
*
*抛出异常
*
*作 者：凡定坤 2018-7-18
=============================================================== */

/*===============================================================
*函数名：traversal
*
*参数：
*     [int] length : 数组的长度
*     [int*] arr :  数组名
*功能描述：遍历当前数组
*
*返回值：无返回值
*
*抛出异常
*
*作 者：凡定坤 2018-7-18
=============================================================== */

/*===============================================================
*函数名：bubbleSort
*
*参数：
*     [int *] arr :数组名
*     [int] n : 数组长度
*功能描述：使用冒泡排序方法将数组从小到大排序
*
*返回值：无返回值
*
*抛出异常
*
*作 者：凡定坤 2018-7-18
=============================================================== */

/*===============================================================
*函数名：combine
*
*参数：
*     [int *] arr1 :数组名
*     [int *] arr2 :数组名
*     [int *] arrCom :数组名
*     [int] length1 : 数组arr1的长度
*     [int] length2 : 数组arr2的长度
*功能描述：将两个有序数组合并成一个有序数组
*
*返回值：无返回值
*
*抛出异常
*
*作 者：凡定坤 2018-7-18
=============================================================== */
#include <iostream>
#include <algorithm>
#include <numeric>
#include <algorithm>
#include <time.h>
using namespace std;

/*随机生成一个数组*/
int * arr(int n);

/*遍历数组*/
void traversal (int * arr, int length);

/*冒泡排序*/
void bubbleSort (int * arr, int n);

/*合并数组*/
void combine (int * arr1, int * arr2, int length1, int length2, int * arrCom);
int main()
{
    srand(time(NULL));

    /*输入数组的长度*/
    int length1;
    cin >> length1;

    int length2;
    cin >> length2;

    /*声明两个数组*/
    int * arr1 = new int[length1];
    int * arr2 = new int[length2];

    /*调用函数给两个数组赋值*/
    arr1 = arr(length1);
    arr2 = arr(length2);

    /*调用函数将数组按升序排列*/
    bubbleSort(arr1, length1);
    bubbleSort(arr2, length2);

    /*分别遍历输出两个数组*/
    traversal(arr1, length1);
    traversal(arr2, length2);

    /*声明一个新数组将合并后的元素放到该数组中*/
    int * arrCom = new int[length1 + length2];

    /*调用合并函数*/
    combine(arr1, arr2, length1, length2, arrCom);
    return 0;
}

/*随机生成一个数组*/
int * arr(int n)
{
    int * a = new int[n];
    for (int i = 0; i < n; i++)
    {
        a[i] = (rand() % (100 - 1 + 1)) + 1;
    }
    return a;
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
void traversal (int * arr, int length)
{
    for (int j = 0; j < length; j++)
    {
        cout << arr[j] << " ";
    }
    cout << endl;
}

/*合并函数*/
void combine (int * arr1, int * arr2, int length1, int length2, int * arrCom)
{
    /*数组arr1的游标*/
    int i = 0;

    /*数组arr2的游标*/
    int j = 0;

    /*合并后的数组*/
    int k = 0;

    /*分别对两个数组进行遍历，挨个比较，将较小的赋值给新数组*/
    while (i < length1 && j < length2)
    {
        if (arr1[i] < arr2[j])
        {
            /*将arr1对应的值赋值到新数组中*/
            arrCom[k] = arr1[i];
            i++;
            k++;
        }
        else
        {
            /*将arr2对应的值赋值到新数组中*/
            arrCom[k] = arr2[j];
            j++;
            k++;
        }
    }

    /*当arr2遍历完后，将arr1中剩下的数直接赋值到新数组中*/
    while (i < length1)
    {
        arrCom[k] = arr1[i];
        i++;
        k++;
    }

    /*当arr1遍历完后，将arr2中剩下的数直接赋值到新数组中*/
    while (j < length2)
    {
        arrCom[k] = arr2[j];
        j++;
        k++;
    }

    /*遍历输出合并后的新数组*/
    for (int m = 0; m < k; m++)
    {
        cout << arrCom[m] << " ";
    }
    cout << endl;
}
