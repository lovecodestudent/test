/**********************************************************************
*�ļ�����1.0.10.cpp
*
*�ļ�������д�������ӡ����������20�����꣨�����ʽ���ۣ���
*
*�����ˣ�������
*
*ʱ�䣺2018-7-13
*
*�汾�ţ�1.0
*
*�޸ļ�¼��
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

        /*�ж�����һ*/
        if (thisYear % 4 == 0 && thisYear %100 != 0)
        {
            cout << thisYear << " ";
            colum++;
            num++;
        }

        /*�ж�������*/
        if (thisYear % 400 == 0)
        {
            cout << thisYear << " ";
            colum++;
            num++;
        }

        /*������ۣ�ÿ��5�����*/
        if (colum == 5)
        {
            colum =0;
            cout << endl;
        }

        /*��20�˳�*/
        if(num == 20)
        {
            break;
        }
    }
    return 0;
}
