/************************************************************************
*
* 文件名：1.1.17.cpp
*
* 文件描述：写个函数，给定一个字符串列表并按下面表示打印出来，一行一个打印在矩形框中
*
* 创建人：  凡定坤

* 时  间：  2018-07-22
*
* 版本号：1.0
*
* 修改记录：
*
************************************************************************/
#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
using namespace std;
/*================================================================
*
* 函 数 名：prints
*
* 参    数：
*
*         [string []]  name          : 传递一个字符串数组
*         [int] length               : 字符串数组的长度
*
* 功能描述:
*
*         打印出要求的形状
*
* 返 回 值： 无返回值
*
* 抛出异常：
*
* 作    者： 凡定坤		2018-7-22
*
================================================================*/
void prints(string name[], int length);
int main()
{
    /*初始化字符串数组*/
    string name[] = {"Hello", "World", "in", "a", "frame","oh!"};

    /*求出字符串数组的长度*/
    int length = sizeof(name) / sizeof(name[0]);

    /*调用打印函数*/
    prints(name, length);
    return 0;
}

void prints(string name[], int length)
{
    /*外层循环用于每行输出一个字符串*/
        for (int i = 0; i < length; i++)
        {
            int sizes = name[i].length();
            cout << "* " << name[i];

            /*内层循环用于输出每行的空格数*/
            for (int j = sizes; j < 5; j++)
            {
                cout << " ";
            }
            cout << " *" << endl;
        }
}
