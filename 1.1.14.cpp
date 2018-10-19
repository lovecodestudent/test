/*********************************************************************
*
*文件名：1.1.14.cpp
*
*文件描述：实现Karatsuba乘法
*创建人：凡定坤
*
*时间：2018-7-19
*
*版本号：1.1
*
*修改记录：本程序实现了较为简单的大数乘法，其中的pow函数的参数第一个为浮点类型，当基数m为其它数字时，
*          计算的结果会出现偏差。暂时没有找到原因。
*
*********************************************************************/

/*================================================================
*函数名：Karatsuba
*
*参数：
*     [long] x : 大数x
*     [long] y : 大数y
*     [long] m : 基数m
*功能描述：利用大数乘法来计算两个数的值并输出
*
*返回值：正确：返回两个数的乘积   错误：报错
*
*抛出异常
*
*作 者：凡定坤 2018-7-19
================================================================*/
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

/*实现Karatsuba乘法*/
void Karatsuba (long x, long y, long m);
int main()
{
    /*大数x*/
    long x;
    cin >> x;

    /*大数y*/
    long y;
    cin >> y;

    /*基数m
    long m;
    cin >> m;
     */
    /*调用函数求结果*/
    Karatsuba (x, y, 3);
    return 0;
}

void Karatsuba (long x, long y, long m)
{
    /*将x分成x1和x0来进行计算*/
    long x1, x0;
    x1 = x / (int)pow(10, m);
    x0 = x - x1 * (int)pow(10,m);

    cout << "x1: " << x1 << " x0: " << x0 << endl;

    /*将y分成y1和y0来进行计算*/
    long y1, y0;
    y1 = y / (int)pow(10,m);
    y0 = y - y1 * (int)pow(10, m);

    cout << "y1: " << y1 << " y0: " << y0 << endl;

    /*z0, z1, z2用于将x和y拆开后的计算*/
    long z0, z1, z2;
    z2 = x1 * y1;
    z0 = x0 * y0;
    z1 = (x1 + x0) * (y1 + y0) - z2 - z0;

    cout << "z2: " << z2 << " z0: " << z0 << " z1: " << z1 << endl;

    /*利用大数乘法求得结果*/
    long result = (z2 * (int)pow(10, 2 * m)) + z1 * (int)pow(10,m) + z0;

    cout << (z2 * (int)pow(10.0, 2 * m)) << endl;
    cout << z1 * (int)pow(10.0,m) << endl;
    cout << z0 << endl;
    cout << x << " * " << y << " = " << result << endl;
}
