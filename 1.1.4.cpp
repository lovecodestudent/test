/*******************************************************************
*
*�ļ�����1.1.4.cpp
*
*�ļ�������д������������1 list������λ�õ�����Ԫ��
*
*�����ˣ�������
*
*ʱ�䣺2018-7-13
*
*�汾�ţ�1.2
*
*�޸ļ�¼��list����ʽ�洢���ڴ治�������ģ����Բ��������ȡ,����ֱ�Ӷ�i���мӼ�����
*          ͨ��ʹ��distance������ʵ��Ҫ�󣬵������в��㡣
*******************************************************************/

/*==============================================================
*��������odds
*
*������
*     [LISTINT] lsits :list����
*     [int] number : ָ������
*�����������������λ�õ���ֵ
*
*����ֵ���޷���ֵ
*
*�׳��쳣��
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

void odds (LISTINT lists, int n);
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
    odds (listOne, n);
    cout << endl;
    return 0;
}

void odds (LISTINT lists, int n)
{
    LISTINT::iterator i;
    int m = 0;
    for (i = lists.begin(); i != lists.end(); ++i)
    {
        m++;

        /*ͨ��advance�ҵ�����λ��*/
        advance(i, 1) ;
        cout << *i << " ";

        /*ͨ�������������ж�����λ�õĸ���*/
        if (m == n / 2)
            break;
    }
    cout << endl;
}
