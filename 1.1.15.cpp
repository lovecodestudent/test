/************************************************
*
*文件名：1.1.15.cpp
*
*文件描述：写个函数测试一个字符串是否是回文
*创建人：凡定坤
*
*时间：2018-7-19
*
*版本号：1.0
*
*修改记录：
*
************************************************/

/*================================================================
*函数名：palindrome
*
*参数：
*     [string] str : 输入字符
*功能描述：判断输入的字符是否为回文字符
*
*返回值：正确：返回true   错误：false
*
*抛出异常
*
*作 者：凡定坤 2018-7-19
================================================================*/
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

/*判断字符是否是回文*/
bool palindrome (string str);
int main()
{
    string str;
    cin >> str;
    if (palindrome(str))
    {
        cout << str << "：是回文字符" << endl;
    }
    else
    {
        cout << str << "：不是回文字符" << endl;
    }
    return 0;
}

/*给定一个字符串判断是不是回文字符*/
bool palindrome (string str)
{
    /*将初始值设置为true*/
    bool result = true;
    int length = str.length();

    /*将首尾字符比较*/
    for (int i = 0; i < length / 2; i++)
    {
        /*当字符不同时将result赋值为false*/
        if (str[i] != str[length - 1 -i])
        {
            result = false;
            break;
        }
    }
    return result;
}
