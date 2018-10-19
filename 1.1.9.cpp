/**********************************************************************
*
*文件名：1.1.9.cpp
*
*文件描述：随机生成两个list A,B，写一个函数，连接A、B两个list
*
*创建人：凡定坤
*
*时间：2018-7-17
*
*版本号：1.0
*
*修改记录：
*
**********************************************************************/

/*===============================================================
*函数名：listRand
*
*参数：
*     [LISTINT] lists :LISTINT对象
*     [int] n : list的长度
*功能描述：随机生成一个list
*
*返回值：正确：返回一个LISTINT对象 错误：报错
*
*抛出异常
*
*作 者：凡定坤 2018-7-17
=============================================================== */

/*===============================================================
*函数名：Traversal
*
*参数：
*     [LISTINT] lists :LISTINT对象
*功能描述：遍历list
*
*返回值：无返回值
*
*抛出异常
*
*作 者：凡定坤 2018-7-17
=============================================================== */
#include <iostream>
#include <list>
#include <numeric>
#include <algorithm>
#include <time.h>
using namespace std;

/*创建一个list容器的实例LISTINT*/
typedef list<int> LISTINT;

/*随机生成一个list*/
LISTINT listRand (LISTINT lists, int n);

/*遍历list*/
void Traversal (LISTINT lists);

int main()
{
    int n ;
    cin >> n;
    srand(time(NULL));

    /*用LISTINT创建两个ist对象*/
    LISTINT listOne;
    LISTINT listTwo;

    /*声明i为迭代器*/
    LISTINT::iterator i;

    /*随机生成两个list*/
    listOne = listRand (listOne, n);
    cout << "第一个list的值为： ";
    Traversal (listOne);

    listTwo = listRand (listTwo, n);
    cout << "第二个list的值为： ";
    Traversal (listTwo);

    i = listOne.begin();
    i++;

    /*调用splice函数*/
    listOne.splice(i, listTwo);
    cout << "合并后的list为： ";
    Traversal (listOne);
    return 0;
}

LISTINT listRand (LISTINT lists, int n)
{
    for (int i = 0; i < n; i++)
    {
        int u = (double)rand() / (RAND_MAX + 1) * (100 - 1) + 1;

        /*向listOne容器中添加数据*/
        lists.push_back(u);
    }
    return lists;
}

void Traversal (LISTINT lists)
{
    /*声明i为迭代器*/
    LISTINT::iterator i;

    /*遍历list*/
    for (i = lists.begin(); i != lists.end(); ++i)
    {
        cout << *i << " ";
    }
    cout << endl;
}
