/*********************************************************************
*
*�ļ�����1.1.6.cpp
*
*�ļ�������д������on_all�����б��е�ÿ��Ԫ�أ���ӡ����ʼ��20����ȫƽ������
*
*�����ˣ�������
*
*ʱ�䣺2018-7-14
*
*�汾�ţ�1.0
*
*�޸ļ�¼��
*
*********************************************************************/

/*==============================================================
*��������on_all
*
*������
*     [LISTINT] lsits :list����
*
*�������������ǰ20������ƽ����
*
*
*����ֵ���޷���ֵ
*
*�׳��쳣
*
*�� �ߣ������� 2018-7-14
==============================================================*/
#include <iostream>
#include <list>
#include <numeric>
#include <algorithm>
#include <time.h>
#include <cmath>
using namespace std;

/*����һ��list������ʵ��LISTINT*/
typedef list<int> LISTINT;

/*��ǰ20��ƽ��������*/
void on_all (LISTINT lists);
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
    on_all(listOne);
    return 0;
}
void on_all (LISTINT lists)
{
    int n = 0;

     /*����iΪ������*/
    LISTINT::iterator i;

    /*����list*/
    for (i = lists.begin(); i != lists.end(); ++i)
    {
         /*ֻ���ǰ20��*/
        if (n < 20)
        {
            cout << sqrt(*i) << " ";
            n++;
        }
        else
        {
            break;
        }
    }
    cout << endl;
}
