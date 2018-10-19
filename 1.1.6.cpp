/*********************************************************************
*
*文件名：1.1.6.cpp
*
*文件描述：写个函数on_all遍历列表中的每个元素，打印出开始的20个完全平方数。
*
*创建人：凡定坤
*
*时间：2018-7-14
*
*版本号：1.0
*
*修改记录：
*
*********************************************************************/

/*==============================================================
*函数名：on_all
*
*参数：
*     [LISTINT] lsits :list对象
*
*功能描述：求出前20个数的平方根
*
*
*返回值：无返回值
*
*抛出异常
*
*作 者：凡定坤 2018-7-14
==============================================================*/
#include <iostream>
#include <list>
#include <numeric>
#include <algorithm>
#include <time.h>
#include <cmath>
using namespace std;

/*创建一个list容器的实例LISTINT*/
typedef list<int> LISTINT;

/*求前20的平方根函数*/
void on_all (LISTINT lists);
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
    on_all(listOne);
    return 0;
}
void on_all (LISTINT lists)
{
    int n = 0;

     /*声明i为迭代器*/
    LISTINT::iterator i;

    /*遍历list*/
    for (i = lists.begin(); i != lists.end(); ++i)
    {
         /*只输出前20个*/
        if (n < 20)
        {
            cout << sqrt(*i) << " ";
            n++;
        }
        else
        {
            break;
        }
    }
    cout << endl;
}
