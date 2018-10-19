/*********************************************************************
*
*文件名：1.1.10.cpp
*
*文件描述：写个函数交替合并两个列表，例如：[a,b,c], [1,2,3] → [a,1,b,2,c,3]。
*
*创建人：凡定坤
*
*时间：2018-7-18
*
*版本号：1.1
*
*修改记录：在写if条件语句是判断条件少加了一部分
*
*********************************************************************/

/*==============================================================
*函数名：listRand
*
*参数：
*     [LISTINT] lists :LISTINT对象
*     [int] n : list的长度
*     [int] select:选择生成数字还是字符
*功能描述：随机生成一个list
*
*返回值：正确：返回一个LISTCHAR对象 错误：报错
*
*抛出异常
*
*作 者：凡定坤 2018-7-18
==============================================================*/

/*==============================================================
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
*作 者：凡定坤 2018-7-18
==============================================================*/
#include <iostream>
#include <list>
#include <numeric>
#include <algorithm>
#include <time.h>
using namespace std;

/*创建一个list容器的实例LISTCHAR*/
typedef list<int> LISTCHAR;

/*随机生成一个list*/
LISTCHAR listRand (LISTCHAR lists, int n, int select);

/*遍历list*/
void Traversal (LISTCHAR lists);

int main()
{
    /*n1和n2分别是生成两个随机list的长度*/
    int n1;
    cin >> n1;

    int n2;
    cin >> n2;
    srand(time(NULL));

    /*用LISTINT创建三个ist对象*/
    LISTCHAR listOne;
    LISTCHAR listTwo;

    /*listThree为用来存放合并后的list*/
    LISTCHAR listThree;

    /*声明i为迭代器*/
    LISTCHAR::iterator i;
    LISTCHAR::iterator j;

    /*随机生成两个list*/
    listOne = listRand (listOne, n1, 1);
    cout << "第一个list的值为： ";
    Traversal (listOne);

    listTwo = listRand (listTwo, n2, 2);
    cout << "第二个list的值为： ";
    Traversal (listTwo);

    i = listOne.begin();
    j = listTwo.begin();
    while (n1 != 0 && n2 != 0)
    {
        /*交替存放listOne和listTwo的元素*/
        listThree.push_back(char(*i));
        listThree.push_back(char(*j));
        i++;
        j++;
        n1--;
        n2--;
    }
    if (n1 == 0 && n2 != 0)
    {
        listThree.push_back(char(*j));
        j++;
        n2--;
    }
    if (n1 != 0 && n2 == 0)
    {
        listThree.push_back(char(*i));
        i++;
        n1--;
    }
    cout << "合并后的list的值为： ";
    Traversal(listThree);
    return 0;
}

/*随机生成字符串函数*/
LISTCHAR listRand (LISTCHAR lists, int n, int select)
{
    /* 要取得[a,b]的随机整数，使用(rand() % (b-a+1))+ a */
    for (int i = 0; i < n; i++)
    {
        char u;
        if (select == 1)
        {
            /*u获取的值为0-9的ASCII值*/
             u = (rand() % (57-48+1))+ 48;
        }
        if (select == 2)
        {
             /*u获取的值为a-z的ASCII值*/
             u = (rand() % (122-97+1))+ 97;
        }
        /*向list容器中添加数据*/
        lists.push_back(u);
    }
    return lists;
}

void Traversal (LISTCHAR lists)
{
    /*声明i为迭代器*/
    LISTCHAR::iterator i;

    /*遍历list*/
    for (i = lists.begin(); i != lists.end(); ++i)
    {
        cout << char (*i) << " ";
    }
    cout << endl;
}
