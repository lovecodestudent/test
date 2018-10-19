/*******************************************************************
*
*文件名：1.1.4.cpp
*
*文件描述：写个函数返回题1 list中奇数位置的所有元素
*
*创建人：凡定坤
*
*时间：2018-7-13
*
*版本号：1.2
*
*修改记录：list是链式存储，内存不是连续的，所以不能随机存取,不能直接对i进行加减操作
*          通过使用distance函数来实现要求，但是仍有不足。
*******************************************************************/

/*==============================================================
*函数名：odds
*
*参数：
*     [LISTINT] lsits :list对象
*     [int] number : 指定参数
*功能描述：输出奇数位置的数值
*
*返回值：无返回值
*
*抛出异常：
*
*作 者：凡定坤 2018-7-13
==============================================================*/
#include <iostream>
#include <list>
#include <numeric>
#include <algorithm>
#include <time.h>
using namespace std;

/*创建一个list容器的实例LISTINT*/
typedef list<int> LISTINT;

void odds (LISTINT lists, int n);
int main()
{
    int n ;
    cin >> n;
    srand(time(NULL));

    /*用LISTINT创建一个名为listOne的list对象*/
    LISTINT listOne;

    /*声明i为迭代器*/
    LISTINT::iterator i;
    for (int i = 0; i < n; i++)
    {
        int u = (double)rand() / (RAND_MAX + 1) * (100 - 1) + 1;

        /*向listOne容器中添加数据*/
        listOne.push_back(u);
    }
    /*遍历list*/
    for (i = listOne.begin(); i != listOne.end(); ++i)
    {
        cout << *i << " ";
    }

    cout << endl;
    odds (listOne, n);
    cout << endl;
    return 0;
}

void odds (LISTINT lists, int n)
{
    LISTINT::iterator i;
    int m = 0;
    for (i = lists.begin(); i != lists.end(); ++i)
    {
        m++;

        /*通过advance找到奇数位置*/
        advance(i, 1) ;
        cout << *i << " ";

        /*通过输入总数来判断奇数位置的个数*/
        if (m == n / 2)
            break;
    }
    cout << endl;
}
