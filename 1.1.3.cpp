/**********************************************************************
*
*文件名：1.1.3.cpp
*
*文件描述：写个函数检查指定的元素是否出现在题1的list中
*
*创建人：凡定坤
*
*时间：2018-7-13
*
*版本号：1.0
*
*修改记录：
*
**********************************************************************/

/*==============================================================
*函数名：checkSa
*
*参数：
*     [LISTINT] lsits :list对象
*     [int] number : 指定参数
*功能描述：判断list中是否有指定的值
*
*
*返回值：成功：true 失败：false
*
*抛出异常
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
bool checkSa(LISTINT lists, int number);
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
    bool exit = checkSa(listOne, 46);
    if (exit)
    {
        cout << "存在指定的元素在list中指定的元素为46" << endl;
    }
    else
    {
        cout << "不存在指定的元素在list中指定的元素为46" << endl;
    }
    return 0;
}

/*判断是否有指定的值*/
bool checkSa(LISTINT lists, int number)
{
    LISTINT::iterator i;

    /*对list进行遍历并判断*/
     for (i = lists.begin(); i != lists.end(); ++i)
    {
        if(*i == number)
        {
            return true;
            break;
        }
    }
    return false;
}
