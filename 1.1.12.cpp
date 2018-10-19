/*********************************************************************
*
*�ļ�����1.1.12.cpp
*
*�ļ�������д����������ǰ100��Fibonacci�����б�
*�����ˣ�������
*
*ʱ�䣺2018-7-18
*
*�汾�ţ�1.0
*
*�޸ļ�¼��
*
*********************************************************************/

/*==============================================================
*��������Fibonacci
*
*������
*     [int] n : Fibonacci���ĸ���
*�������������ǰn��Fibonacci��
*
*����ֵ����ȷ������һ��Fibonacci��  ���󣺱���
*
*�׳��쳣
*
*�� �ߣ������� 2018-7-18
==============================================================*/
#include <iostream>
#include <algorithm>
using namespace std;

/*����Fibonacci����*/
unsigned long long Fibonacci (int n);
int main ()
{
    int number = 40;

    int m = 0;

    /*���ǰ40��ķƲ���������*/
    for (int i = 1; i <= number; i++)
    {
        int f = Fibonacci(i);
        cout << f << " ";
        m++;

        /*ÿ10�����ֻ���һ��*/
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

    /*���еĵ�һ��Ϊ0*/
    if (n == 1)
        return 0;

    /*���еĵڶ���Ϊ1*/
    if (n == 2)
        return 1;
    else
        return Fibonacci(n -1) + Fibonacci(n - 2);
}
