/******************************************************************
*
*文件名：1.1.7.cpp
*
*文件描述：该list使用下面的排序算法进行排序：
*          直接插入排序、希尔排序、简单选择排序、
*          堆排序、冒泡排序、快速排序、归并排序、
*          奇偶排序、臭皮匠排序
*
*创建人：凡定坤
*
*时间：2018-7-14
*
*版本号：1.1
*
*修改记录：我用list写不出来，采用的是数组。
*
******************************************************************/

/*===============================================================
*函数名：strightIns
*
*参数：
*     [int *] arr :数组
*     [int] n : 数组长度
*功能描述：使用直接插入排序方法将数组从小到大排序
*
*返回值：无返回值
*
*抛出异常
*
*作 者：凡定坤 2018-7-14
=============================================================== */

/*===============================================================
*函数名：shellSort
*
*参数：
*     [int *] arr :数组
*     [int] n : 数组长度
*功能描述：使用希尔排序方法将数组从小到大排序
*
*返回值：无返回值
*
*抛出异常
*
*作 者：凡定坤 2018-7-14
=============================================================== */

/*===============================================================
*函数名：chooseSort
*
*参数：
*     [int *] arr :数组
*     [int] n : 数组长度
*功能描述：使用简单选择排序方法将数组从小到大排序
*
*返回值：无返回值
*
*抛出异常
*
*作 者：凡定坤 2018-7-14
=============================================================== */

/*===============================================================
*函数名：heapAdjust
*
*参数：
*     [int *] arr :数组
*     [int] start : 数组初始下标
*     [int] end   : 数组末尾下标
*功能描述：进行堆调整，将堆调整为大根堆
*
*返回值：无返回值
*
*抛出异常
*
*作 者：凡定坤 2018-7-14
=============================================================== */

/*===============================================================
*函数名：heapSort
*
*参数：
*     [int *] arr :数组
*     [int] n : 数组长度
*功能描述：建堆，并对其进行排序
*
*返回值：无返回值
*
*抛出异常
*
*作 者：凡定坤 2018-7-14
=============================================================== */

/*===============================================================
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
*作 者：凡定坤 2018-7-14
=============================================================== */

/*===============================================================
*函数名：quickSort
*
*参数：
*     [int *] arr :数组
*     [int] left : 数组左侧下标
*     [int] right: 数组右侧下标
*功能描述：使用冒泡排序方法将数组从小到大排序
*
*返回值：无返回值
*
*抛出异常
*
*作 者：凡定坤 2018-7-14
=============================================================== */

/*===============================================================
*函数名：mergeArray
*
*参数：
*     [int *] arr :数组
*     [int] lengths : 数组长度
*功能描述：用于生成一个与原数组等长的数组
*
*返回值：无返回值
*
*抛出异常
*
*作 者：凡定坤 2018-7-14
=============================================================== */

/*===============================================================
*函数名：mergeSort
*
*参数：
*     [int *] arr :数组
*     [int] left : 左侧下标
*     [int] right: 右侧下标
*     [int *] mergeArray: 临时数组
*
*功能描述：用于用于递归分解并排序
*
*返回值：无返回值
*
*抛出异常
*
*作 者：凡定坤 2018-7-14
=============================================================== */

/*===============================================================
*函数名：merges
*
*参数：
*     [int *] arr :数组
*     [int] left : 左侧下标
*     [int] mid  : 中间下标
*     [int] right: 右侧下标
*     [int *] mergeArray: 临时数组
*
*功能描述：用于合并两个有序数组
*
*返回值：无返回值
*
*抛出异常
*
*作 者：凡定坤 2018-7-14
=============================================================== */

/*===============================================================
*函数名：oddEvenSort
*
*参数：
*     [int *] arr :数组
*     [int] lengths : 数组长度
*
*功能描述：采用奇偶排序方式将数组从小到大排序
*
*返回值：无返回值
*
*抛出异常
*
*作 者：凡定坤 2018-7-14
=============================================================== */

/*===============================================================
*函数名：stoogeSort
*
*参数：
*     [int *] arr :数组
*     [int] left : 数组左侧下标
*     [int] right: 数组右侧下标
*功能描述：采用臭皮匠排序方式将数组从小到大排序
*
*返回值：无返回值
*
*抛出异常
*
*作 者：凡定坤 2018-7-14
=============================================================== */

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
*作 者：凡定坤 2018-7-14
=============================================================== */
#include <iostream>
#include <algorithm>
using  namespace std;

/*1直接插入排序*/
void strightIns (int * arr, int n);

/*2希尔排序*/
void shellSort (int * arr, int n);

/*3简单选择排序*/
void chooseSort (int * arr, int n);

/*4堆排序*/
void heapAdjust (int * arr, int start, int end);

void heapSort (int * arr, int n);

/*5冒泡排序*/
void bubbleSort (int * arr, int n);

/*6快速排序*/
void quickSort (int * arr, int left, int right);

/*7归并排序*/

/*mergeArray函数用于生成一个与原数组等长的数组*/
void mergeArray (int * arr, int lengths);

/*mergeSort函数用于递归分解并排序*/
void mergeSort (int * arr, int left, int right, int * mergeArray);

/*merges函数用于合并两个有序数组*/
void merges (int *arr, int left, int mid, int right, int * mergeArray);

/*8奇偶排序*/
void oddEvenSort (int * arr, int lengths);

/*9臭皮匠排序*/
void stoogeSort (int * arr, int left, int right);

/*遍历数组*/
void prints (int * arr, int n);
int main()
{
    //int a[] = {19, 25, 87, 30, 26, 18};
    int a[9]={5, 4, 9, 1, 7, 6, 2, 3, 8};
    int lengths = sizeof(a) / sizeof(a[0]);
    cout << lengths << endl;

    cout << "---直接插入排序---" << endl;
    /*调用直接插入排序*/
    strightIns (a, lengths);
    /*调用显示方法*/
    prints (a, lengths);

    cout << "---希尔排序---" << endl;
    /*调用希尔排序*/
    shellSort(a, lengths);
    /*调用显示方法*/
    prints (a, lengths);

    cout << "---简单选择排序---" << endl;
    /*调用简单选择排序*/
    chooseSort (a, lengths);
    /*调用显示方法*/
    prints (a, lengths);

    cout << "---堆排序---" << endl;
    /*调用堆排序*/
    heapSort(a, lengths);
    /*调用显示方法*/
    prints (a, lengths);

    cout << "---冒泡排序---" << endl;
    /*调用冒泡排序*/
    bubbleSort(a, lengths);
    /*调用显示方法*/
    prints (a, lengths);

    cout << "---快速排序---" << endl;
    /*调用快速排序*/
    quickSort(a, 0, lengths - 1);
    /*调用显示方法*/
    prints (a, lengths);

    cout << "---归并排序---" << endl;
    /*调用归并排序*/
    mergeArray (a, lengths);
    /*调用显示方法*/
    prints (a, lengths);

    cout << "---奇偶排序---" << endl;
    /*调用奇偶排序*/
    oddEvenSort (a, lengths);
    /*调用显示方法*/
    prints (a, lengths);

    cout << "---臭皮匠排序---" << endl;
    /*调用奇偶排序*/
    stoogeSort (a,0, lengths - 1);
    /*调用显示方法*/
    prints (a, lengths);

    return 0;
}

/*1直接插入排序*/
void strightIns (int * arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        /*找到a[i]插入的位置*/
        int j;
        for (j = i -1; j >= 0; j--)
        {
            if (arr[i] > arr[j])
                break;
        }

        /*将插入位置后的元素依次后移*/
        if (j != i - 1)
        {
            int temp = arr[i];
            for (int k = i - 1; k > j; k --)
            {
                arr[k+1] = arr[k];
            }
            arr[j+1] = temp;
        }
    }
}

/*2希尔排序*/
void shellSort (int * arr, int n)
{
    int gap;

    /*第一层循环，取增量值*/
    for (gap = n / 2; gap > 0; gap /= 2)
    {
        /*第二层循环，有几组循环几次*/
        for (int i = 0; i < gap; i ++)
        {
            /*第三层循环，每组几个元素循环几次*/
            for (int j = i + gap; j < n; j++ )
            {
                /*直接插入排序*/
                if (arr[j - gap] > arr[j])
                {
                    int temp = arr[j];
                    int k = j - gap;
                    while(k >= 0 && arr[k] > temp)
                    {
                        arr[k+gap] = arr[k];
                        k -= gap;
                    }
                    arr[k] = temp;
                }
            }
        }
    }
}

/*3简单选择排序*/
void chooseSort (int * arr, int n)
{
    /*外层循环用于控制比较次数*/
    for (int i = 0; i < n; i++)
    {
        int min = i;
        /*内层循环找出每次比较的最小下标*/
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
                min = j;
        }
        /*当最小下标更换时交换对应的值*/
        if(min != i)
        {
            int temp ;
            temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
}

/*4堆排序*/
void heapAdjust (int * arr, int start, int end)
{
    /*建立父子结点*/
    int dad = start;
    int son = 2 * dad + 1;
    /*子结点在范围内才进行比较*/
    while (son <= end)
    {
        /*比较左右结点，选择最大的*/
        if (son + 1 <= end && arr[son] < arr[son + 1])
            son++;
        /*如果父节点大于子结点跳出本次循环*/
        if (arr[son] < arr[dad])
            break;
        /*否则进行交换*/
        else
        {
            /*继续查找孙子结点*/
            swap(arr[son], arr[dad]);
            dad = son;
            son = dad * 2 + 1;
        }
    }
}

void heapSort (int * arr, int n)
{
    /*建堆并对其进行初始化*/
    for (int i = n / 2 - 1; i >= 0; i--)
    {
        heapAdjust(arr, i, n - 1);
    }
    /*建好后的堆，交换首尾结点的位置，再重新建堆*/
    for (int j = n - 1; j > 0; j--)
    {
        swap(arr[0], arr[j]);
        heapAdjust(arr, 0, j - 1);
    }
}

/*5冒泡排序*/
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

/*6快速排序*/
void quickSort (int * arr, int left, int right)
{
    if(left > right)
        return;
    /*temp为基准数*/
    int temp = arr [left];
    int i = left;
    int j = right;
    while (i != j)
    {
        /*基准数从左边开始，从右边开始找*/
        while (arr[j] >= temp && j > i)
            j--;
        while (arr[i] <= temp && j > i)
            i++;
        if(i < j)
        /*交换对应位置的值*/
            swap(arr[i], arr[j]);
    }
    /*此时i和j相同，将相遇位置的值和基准值交换*/
    arr[left] = arr[i];
    arr[i] = temp;
    /*递归调用左边和右边*/
    quickSort(arr, left, i - 1);
    quickSort(arr, i + 1, right);
}

/*7归并排序*/
void mergeArray (int * arr, int lengths)
{
    /*新建一个临时数组用于存放比较后的数组元素*/
    int * temp =new int [lengths - 1];
    mergeSort(arr, 0, lengths - 1, temp);
}

void mergeSort (int * arr, int left, int right, int * mergeArray)
{
    if (left > right)
    {
        int mid = (left + right) / 2;
        /*对左边进行归并排序*/
        mergeSort (arr, left, mid, mergeArray);
        /*对右边进行归并排序*/
        mergeSort(arr, mid + 1, right, mergeArray);
        /*把两个有序数组合并成一个有序数组*/
        merges(arr, left, mid, right, mergeArray);
    }
}

void merges (int *arr, int left, int mid, int right, int * mergeArray)
{
    /*左序列指针*/
    int i = left;
    /*右序列指针*/
    int j = mid + 1;
    /*临时指针*/
    int a = 0;
    /*在两个序列中分别从起始位置开始比较，将较小的赋值给临时数组*/
    while (i <= mid && j <= right)
    {
        if (arr[i] <= arr[j])
        {
            mergeArray[a] = arr[i];
            i++;
            a++;
        }
        else
        {
            mergeArray[a] = arr[j];
            j++;
            a++;
        }
    }
    /*当左边或者右边其中一个所有元素比较完后，将剩余的所有元素直接移动到临时数组中*/
    while (i <= mid )
    {
        /*将左边剩余元素移动到临时数组中*/
        mergeArray[a] = arr[i];
        i++;
        a++;
    }
    while (j <= right )
    {
        /*将右边边剩余元素移动到临时数组中*/
        mergeArray[a] = arr[j];
        j++;
        a++;
    }
    /*将临时数组赋值给原始数组*/
    for (int m = 0; m < right; m++)
    {
        arr[i] = mergeArray[i];
    }
}

/*8奇偶排序*/
void oddEvenSort (int * arr, int lengths)
{
    bool sorted = false;
    while (!sorted)
    {
        sorted = true;
        /*每次进行两次循环（奇循环和偶循环）*/
        for (int i = 0; i < 2; i++)
        {
            /*每次循环时进行和右边的数进行比较*/
            for (int j = 0; j < lengths - 1; j += 2)
            {
                if (arr[j] > arr[j+1])
                {
                    swap(arr[j], arr[j+1]);
                    sorted = false;
                }
            }
        }
    }
}

/*9臭皮匠排序*/
/*
如果最后一个值小于第一个值，则交换这两个数
如果当前集合元素数量大于等于3：
    1.使用臭皮匠排序前2/3的元素
    2.使用臭皮匠排序后2/3的元素
    3.再次使用臭皮匠排序前2/3的元素
*/
void stoogeSort (int * arr, int left, int right)
{
    if (arr[left] > arr[right])
    {
        swap(arr[left], arr[right]);
    }
    if ((right - left + 1) > 3)
    {
        int t = (right - left + 1 ) / 3;
        stoogeSort (arr, left, right - t);
        stoogeSort (arr, left + t, right);
        stoogeSort (arr, left, right - t);
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
