/******************************************************************
*文件名：1.0.2-3.cpp
*
*文件描述：输入用户的姓名并用该姓名和他打招呼,改进后只对Alice和Bob打招呼。
*
*创建人：凡定坤
*
*时间：2018-7-12
*
*版本号：1.1
*
*修改记录：直接通过“==”比较，改为调用函数compare
*
***********************************************************************/
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string name;
    cin >> name;

    /*调用字符串比较函数*/
    int num1 = name.compare("Alice");
    int num2 = name.compare("Bob");
    if (num1 == 0 || num2 == 0)
    {
        cout << name << "你好" << endl;
    }
    else
        cout << "输入有误" <<endl;
    return 0;
}
