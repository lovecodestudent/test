/******************************************************************
*
*文件名：1.1.1.cpp
*
*文件描述：输入整数N，随机生成N个数的list，写一个函数，返回list中最大的数.
*
*创建人：凡定坤
*
*时间：2018-7-13
*
*版本号：1.0
*
*修改记录：
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
    return 0;
}
