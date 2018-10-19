/**********************************************************************
*
*文件名：1.1.5.cpp
*
*文件描述：写三个函数来计算题1 list中数字的和：分别用for循环，while循环和递归完成。
*
*创建人：凡定坤
*
*时间：2018-7-14
*
*版本号：1.1 递归调用结果报错，没能实现。
*
*修改记录：
*
**********************************************************************/

/*==============================================================
*函数名：forCir
*
*参数：
*     [LISTINT] lsits :list对象
*
*功能描述：求出list中的所有元素之和
*
*
*返回值：成功：返回所有值之和 失败：报错
*
*抛出异常
*
*作 者：凡定坤 2018-7-14
==============================================================*/

/*==============================================================
*函数名：whileCir
*
*参数：
*     [LISTINT] lsits :list对象
*
*功能描述：求出list中的所有元素之和
*
*
*返回值：成功：返回所有值之和 失败：报错
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
using namespace std;

/*创建一个list容器的实例LISTINT*/
typedef list<int> LISTINT;

int forCir (LISTINT lists);

int whileCir (LISTINT lists);

/*int recursionCir (LISTINT lists, LISTINT::iterator i);*/
int main()
{
    int n;
    cin >> n;
    srand(time(NULL));

    /*用LISTINT创建一个名为listOne的list对象*/
    LISTINT listOne;

    /*声明i为迭代器*/
    LISTINT::iterator i;
    i = listOne.end();

    for (int i = 0; i < n; i++)
    {
        int u = (double)rand() / (RAND_MAX + 1) * (100 - 1) + 1;

        /*向listOne容器中添加数据*/
        listOne.push_back(u);
    }

    /*遍历list*/
    int sum = 0;
    for (i = listOne.begin(); i != listOne.end(); ++i)
    {
        cout << *i << " ";
    }
    cout << "-----for循环------" << endl;
    cout << forCir(listOne);
    cout << endl;

    cout << "-----while循环----" << endl;
    cout << whileCir(listOne);
    cout << endl;

    /*
    cout << "------递归--------" << endl;
    cout << recursionCir(listOne, i);
    cout << endl;
    */
    return 0;
}
int forCir (LISTINT lists)
{
    int sum = 0;
    LISTINT::iterator i;
    for (i = lists.begin(); i != lists.end(); ++i)
    {
        sum += *i;
    }
    return sum;
}
int whileCir (LISTINT lists)
{
    int sum = 0;
    LISTINT::iterator i;
    i = lists.begin();
    while (i != lists.end())
    {
        sum += *i;
        ++i;
    }
    return sum;
}
/*
int recursionCir (LISTINT lists, LISTINT::iterator i)
{
    if (i != lists.begin())
    {
        return *i + recursionCir(lists, i--);
    }
}
*/
