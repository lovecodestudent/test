/**********************************************************************
*
*�ļ�����1.1.3.cpp
*
*�ļ�������д���������ָ����Ԫ���Ƿ��������1��list��
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

/*==============================================================
*��������checkSa
*
*������
*     [LISTINT] lsits :list����
*     [int] number : ָ������
*�����������ж�list���Ƿ���ָ����ֵ
*
*
*����ֵ���ɹ���true ʧ�ܣ�false
*
*�׳��쳣
*
*�� �ߣ������� 2018-7-13
==============================================================*/
#include <iostream>
#include <list>
#include <numeric>
#include <algorithm>
#include <time.h>
using namespace std;

/*����һ��list������ʵ��LISTINT*/
typedef list<int> LISTINT;
bool checkSa(LISTINT lists, int number);
int main()
{
    int n ;
    cin >> n;
    srand(time(NULL));

    /*��LISTINT����һ����ΪlistOne��list����*/
    LISTINT listOne;

    /*����iΪ������*/
    LISTINT::iterator i;
    for (int i = 0; i < n; i++)
    {
        int u = (double)rand() / (RAND_MAX + 1) * (100 - 1) + 1;

        /*��listOne�������������*/
        listOne.push_back(u);
    }
    /*����list*/
    for (i = listOne.begin(); i != listOne.end(); ++i)
    {
        cout << *i << " ";
    }
    cout << endl;
    bool exit = checkSa(listOne, 46);
    if (exit)
    {
        cout << "����ָ����Ԫ����list��ָ����Ԫ��Ϊ46" << endl;
    }
    else
    {
        cout << "������ָ����Ԫ����list��ָ����Ԫ��Ϊ46" << endl;
    }
    return 0;
}

/*�ж��Ƿ���ָ����ֵ*/
bool checkSa(LISTINT lists, int number)
{
    LISTINT::iterator i;

    /*��list���б������ж�*/
     for (i = lists.begin(); i != lists.end(); ++i)
    {
        if(*i == number)
        {
            return true;
            break;
        }
    }
    return false;
}
