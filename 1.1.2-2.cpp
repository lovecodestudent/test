/*********************************************************************
*
*文件名：1.1.2-1.cpp
*
*文件描述：建立一个空的list，不借助空链表的辅助空间，实现题1中所建list的逆转
*
*创建人：凡定坤
*
*时间：2018-7-13
*
*版本号：1.1
*
*修改记录：这里直接使用C++中的reverse函数，偷懒了。
*
*********************************************************************/
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
    reverse(listOne.begin(), listOne.end());
    cout << "遍历反转后的结果" << endl;
    for (i = listOne.begin(); i != listOne.end(); ++i)
    {
        cout << *i << " ";
    }
    return 0;
}
