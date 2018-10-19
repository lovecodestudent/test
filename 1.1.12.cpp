/*********************************************************************
*
*文件名：1.1.12.cpp
*
*文件描述：写个函数计算前100个Fibonacci数的列表
*创建人：凡定坤
*
*时间：2018-7-18
*
*版本号：1.0
*
*修改记录：
*
*********************************************************************/

/*==============================================================
*函数名：Fibonacci
*
*参数：
*     [int] n : Fibonacci数的个数
*功能描述：输出前n个Fibonacci数
*
*返回值：正确：返回一个Fibonacci数  错误：报错
*
*抛出异常
*
*作 者：凡定坤 2018-7-18
==============================================================*/
#include <iostream>
#include <algorithm>
using namespace std;

/*生成Fibonacci数列*/
unsigned long long Fibonacci (int n);
int main ()
{
    int number = 40;

    int m = 0;

    /*输出前40项的菲波那切数列*/
    for (int i = 1; i <= number; i++)
    {
        int f = Fibonacci(i);
        cout << f << " ";
        m++;

        /*每10个数字换行一次*/
        if (m == 10)
        {
            m = 0;
            cout << endl;
        }
    }
    return 0;
}

unsigned long long Fibonacci (int n)
{
    int number;

    /*数列的第一项为0*/
    if (n == 1)
        return 0;

    /*数列的第二项为1*/
    if (n == 2)
        return 1;
    else
        return Fibonacci(n -1) + Fibonacci(n - 2);
}
