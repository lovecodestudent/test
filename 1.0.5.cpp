/*************************************************
*文件名：1.0.5.cpp
*
*文件描述：输出1到n是3和5的倍数的和
*
*创建人：凡定坤
*
*时间：2018-7-12
*
*版本号：1.0
*
*修改记录：数组a赋值时从0开始。
*
*************************************************/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    int b[n];
    int k = 0;
    int sum = 0;

    /*数组a进行赋值*/
    for (int i = 0; i < n; i++)
    {
        a[i] = i+1;
    }

    /*将能被3或者5整除的数放到数组b中*/
    for (int j = 0; j < n; j++)
    {

        if (a[j] % 3 == 0 || a[j] % 5 == 0)
        {
            b[k] = a[j];
            k++;
        }
    }
    cout << k << endl;

    /*对数组b进行求和*/
    for (int m = 0 ; m < k ; m++)
    {
        sum += b[m];
    }
    cout << sum << endl;
    return 0;
}
