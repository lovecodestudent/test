/************************************************************************
*
* 文件名：1.1.18.cpp
*
* 文件描述：写函数将一段文本text翻译为Pig Latin返回
*
* 创建人：  凡定坤

* 时  间：  2018-07-22
*
* 版本号：1.1
*
* 修改记录：if条件有误导致第一个字符一直被循环转换
*
************************************************************************/

#include <iostream>
#include <string>
#include <cstring>
#include <sstream>
using namespace std;

/*================================================================
*
* 函 数 名：translate
*
* 参    数：
*
*         [string]  str          : 传递一个字符串
*
* 功能描述:
*
*         将一段文本text翻译为Pig Latin返回
*
* 返 回 值： 正确：返回一个字符串；错误：报错
*
* 抛出异常：
*
* 作    者： 凡定坤		2018-7-22
*
================================================================*/
char * translate(string str);
int main()
{
    /*初始化字符串*/
    string str1 = "The quick brown fox";

    /*新建一个字符数组用于接收转换后的字符串*/
    char * chs = new char[100];

    /*调用转换函数*/
    chs = translate(str1);

    cout << "转换后的字符串为：";
    cout << chs << endl;

    cout << "正确的结果为----：Hetay uickqay rownbay oxfay" << endl;
    return 0;
}

char * translate(string str)
{
    /*将传来的字符串通过空格分割成不同的字符串*/
    istringstream is(str);

    /*声明一个字符串数组用于接收分割后的字符串*/
    string arrays[100] ;

    /*length为字符串数组的长度*/
    int length = 0;
    while (is >> arrays[length])
    {
        /*输出分割后的字符串*/
        cout << arrays[length] << " ";
        length++;
    }
    cout << endl;

    /*temp变量用于存储每个字符串的第一个字符*/
    char temp;

    /*strs用于存储修改后的字符串*/
    string strs;

    /*chs用于返回最终的结果*/
    char * chs = new char[100];

    /*外层循环用于控制次数*/
    for (int i = 0; i < length; i++)
    {
        /*内层循环用于将字符串按要求进行转换*/
        for (int j = 0; j < arrays[i].length(); j++)
        {
            /*将字符串数组中的第一个字符串的第一个字符变成小写第二个字符变成大写*/
            if (i == 0 && j ==0)
            {
                temp = arrays[i][0] + 32;
                arrays[i][1] -= 32;
                arrays[i][j] = arrays[i][j+1];
            }

            if (i == 0 && j != 0)
            {
               /*将首字符放到该字符串的末尾*/
                if (j == arrays[i].length() - 1)
                {
                    arrays[i][j] = temp;
                }
                else
                {
                    arrays[i][j] = arrays[i][j+1];
                }

            }

            /*如果不是第一个字符串则将该字符串的第一个字符赋值给temp*/
            if (i != 0 && j ==0)
            {
                temp = arrays[i][0];
                arrays[i][j] = arrays[i][j+1];
            }
            else
            {
                /*将首字符放到该字符串的末尾*/
                if (j == arrays[i].length() - 1)
                {
                    arrays[i][j] = temp;
                }

                else
                {
                    arrays[i][j] = arrays[i][j+1];
                }

            }
        }

        /*不是最后一个字符串后面加空格*/
        if (i != length - 1)
        {
            arrays[i] += "ay ";
        }

        else
        {
            arrays[i] += "ay";
        }
        strs += arrays[i];
    }

    /*将string转换成char数组用于返回*/
    strcpy(chs, strs.c_str());
    return chs;
}
