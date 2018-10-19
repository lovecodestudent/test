/**********************************************************************
*文件名：1.0.10.cpp
*
*文件描述：写个程序打印出接下来的20个闰年（输出格式美观）。
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
#include <iostream>
using namespace std;
int main()
{
    int thisYear = 2018;
    int num = 0;
    int colum = 0;
    while (true)
    {
        thisYear++;

        /*判定方法一*/
        if (thisYear % 4 == 0 && thisYear %100 != 0)
        {
            cout << thisYear << " ";
            colum++;
            num++;
        }

        /*判定方法二*/
        if (thisYear % 400 == 0)
        {
            cout << thisYear << " ";
            colum++;
            num++;
        }

        /*输出美观，每行5个年份*/
        if (colum == 5)
        {
            colum =0;
            cout << endl;
        }

        /*满20退出*/
        if(num == 20)
        {
            break;
        }
    }
    return 0;
}
