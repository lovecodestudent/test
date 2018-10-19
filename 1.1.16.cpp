/******************************************************************************
*文件名：1.1.16.cpp
*
*文件描述：写一个函数将一段文本text大小写互换
*创建人：凡定坤
*
*时间：2018-7-19
*
*版本号：1.2
*
*修改记录：最后一个字符重复输出；将修改后的字符写入到txt文本中时open函数报错
*
*********************************************************************************/

/*================================================================
*
* 函 数 名：readTxt
*
* 参    数：
*
*         [string]  file		 : 指定文件的路径
*
*
* 功能描述:
*
*         读取指定文件的内容
*
* 返 回 值： 成功返回文件的内容，失败报错
*
* 抛出异常：
*
* 作    者： 凡定坤		2018-7-19
*
================================================================*/

/*================================================================
*
* 函 数 名：writeTxt
*
* 参    数：
*
*         [string]  file		 : 指定文件的路径
*         [string]  str          : 要写入的字符串
*
* 功能描述:
*
*         将指定的内容写入到指定的文本中
*
* 返 回 值： 无返回值
*
* 抛出异常：
*
* 作    者： 凡定坤		2018-7-19
*
================================================================*/

/*================================================================
*
* 函 数 名：traversals
*
* 参    数：
*
*         [string]  str          : 要转换的字符串
*
* 功能描述:
*
*         遍历给定的字符串
*
* 返 回 值： 无返回值
*
* 抛出异常：
*
* 作    者： 凡定坤		2018-7-19
*
================================================================*/

/*================================================================
*
* 函 数 名：convert
*
* 参    数：
*
*         [string]  str          : 要转换的字符串
*
* 功能描述:
*
*         将给定的字符串进行大小写转换
*
* 返 回 值： 正确：返回转换后的字符串；错误：报错
*
* 抛出异常：
*
* 作    者： 凡定坤		2018-7-19
*
================================================================*/
#include <iostream>
#include <string>
#include <fstream>
#include <cassert>
#include <cstdlib>
using namespace std;

/*读取指定文件中的内容*/
char * readTxt(string file);

/*将内容写入到指定文件中*/
void writeTxt(string file, string str);

/*遍历当前字符串*/
void traversals(string str);

/*对当前字符串进行大小写转换*/
char * convert(string str);
int main()
{
    /*指定路径*/
    string file = "F:\\TestString.txt";

    /*获取指定文本中内容并返回*/
    char * arrays = readTxt(file);

    string str = arrays;

    /*将获取到的内容进行大小写转换并返回*/
    traversals(str);

    string str1 = convert(str);

    /*将转换后的内容写入到文件中*/
    writeTxt(file, str1);

    return 0;
}

/*读取指定文件中的内容*/
char * readTxt(string file)
{
    ifstream infile;

    /*将文件流对象与文件连接起来*/
    infile.open(file.data());

    /*若失败,则输出错误消息,并终止程序运行*/
    assert(infile.is_open());

    char c;
    char * arrays = new char[100];
    int i = 0;

    /*逐字符获取文件中的内容*/
    while (!infile.eof())
    {
            infile >> c;

            /*为了避免最后一个字符重复读取*/
            if(infile.fail())
            {
                break;
            }
            arrays[i] = c;
            i++;
    }

    /*关闭文件输入流*/
    infile.close();
    return arrays;
}

/*遍历当前字符串*/
void traversals(string str)
{
    int length = str.length();
    for (int i = 0; i < length; i++)
    {
        cout << str[i];
    }
    cout << endl;
}

/*对当前字符串进行大小写转换*/
char * convert(string str)
{
    char * ch = new char[100];
    int length = str.length();

    /*通过ASSIC码来进行大小写转换*/
    for (int i = 0; i < length; i++)
    {
        if (str[i] >= 65 && str[i] <= 90)
        {
            str[i] += 32;
            ch[i] = str[i];
        }
        else
        {
            str[i] -= 32;
            ch[i] = str[i];
        }
        cout << str[i];
    }
    cout << endl;

    return ch;
}

/*将内容写入到指定文件中*/
void writeTxt(string file, string str)
{
    ofstream outFile;

    /*c_str()：生成一个const char*指针，指向以空字符终止的数组*/
    outFile.open(file.c_str());
    int length = str.length();

    /*将转换后的字符写入*/
    for (int i = 0; i < length; i++)
    {
        outFile << str[i];
    }
    outFile.close();
}
