/******************************************************************
*
*文件名：1.1.2-1.cpp
*
*文件描述：建立一个空的list，借助空链表的辅助空间，实现题1中所建list的逆转
*
*创建人：凡定坤
*
*时间：2018-7-13
*
*版本号：1.2
*
*修改记录：最后反转输出时，仍使用lsitOne，导致结果一直不变，查了半天QAQ-_-。
*
******************************************************************/
#include <iostream>
#include <list>
#include <numeric>
#include <algorithm>
#include <time.h>
using namespace std;

/*创建一个list容器的实例LISTINT*/
typedef list<int> LISTINT;
int main()
{
    int n ;
    cin >> n;
    srand(time(NULL));

    /*用LISTINT创建一个名为listOne的list对象*/
    LISTINT listOne;

   /*用LISTINT创建一个名为listTwo的list对象*/
    LISTINT listTwo;

   /*声明i为迭代器*/
    LISTINT::iterator i;
    cout << "随机生成数字" <<endl;
    for (int i = 0; i < n; i++)
    {
        int u = (double)rand() / (RAND_MAX + 1) * (100 - 1) + 1;

        /*向listOne容器中添加数据*/
        cout << u << " ";
        listOne.push_back(u);
    }
    cout << endl;

    /*遍历list*/
    cout << "遍历输出结果" << endl;
    for (i = listOne.begin(); i != listOne.end(); ++i)
    {
        cout << *i << " ";
        listTwo.push_front(*i);
    }
    cout << endl;

    /*反转*/
    cout << "反转后的结果" << endl;
    for (i = listTwo.begin(); i != listTwo.end(); ++i)
    {
        cout << *i << " ";
    }
    cout << endl;
    return 0;
}
