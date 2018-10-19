/**********************************************************************
*
*�ļ�����1.1.5.cpp
*
*�ļ�������д����������������1 list�����ֵĺͣ��ֱ���forѭ����whileѭ���͵ݹ���ɡ�
*
*�����ˣ�������
*
*ʱ�䣺2018-7-14
*
*�汾�ţ�1.1 �ݹ���ý������û��ʵ�֡�
*
*�޸ļ�¼��
*
**********************************************************************/

/*==============================================================
*��������forCir
*
*������
*     [LISTINT] lsits :list����
*
*�������������list�е�����Ԫ��֮��
*
*
*����ֵ���ɹ�����������ֵ֮�� ʧ�ܣ�����
*
*�׳��쳣
*
*�� �ߣ������� 2018-7-14
==============================================================*/

/*==============================================================
*��������whileCir
*
*������
*     [LISTINT] lsits :list����
*
*�������������list�е�����Ԫ��֮��
*
*
*����ֵ���ɹ�����������ֵ֮�� ʧ�ܣ�����
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
using namespace std;

/*����һ��list������ʵ��LISTINT*/
typedef list<int> LISTINT;

int forCir (LISTINT lists);

int whileCir (LISTINT lists);

/*int recursionCir (LISTINT lists, LISTINT::iterator i);*/
int main()
{
    int n;
    cin >> n;
    srand(time(NULL));

    /*��LISTINT����һ����ΪlistOne��list����*/
    LISTINT listOne;

    /*����iΪ������*/
    LISTINT::iterator i;
    i = listOne.end();

    for (int i = 0; i < n; i++)
    {
        int u = (double)rand() / (RAND_MAX + 1) * (100 - 1) + 1;

        /*��listOne�������������*/
        listOne.push_back(u);
    }

    /*����list*/
    int sum = 0;
    for (i = listOne.begin(); i != listOne.end(); ++i)
    {
        cout << *i << " ";
    }
    cout << "-----forѭ��------" << endl;
    cout << forCir(listOne);
    cout << endl;

    cout << "-----whileѭ��----" << endl;
    cout << whileCir(listOne);
    cout << endl;

    /*
    cout << "------�ݹ�--------" << endl;
    cout << recursionCir(listOne, i);
    cout << endl;
    */
    return 0;
}
int forCir (LISTINT lists)
{
    int sum = 0;
    LISTINT::iterator i;
    for (i = lists.begin(); i != lists.end(); ++i)
    {
        sum += *i;
    }
    return sum;
}
int whileCir (LISTINT lists)
{
    int sum = 0;
    LISTINT::iterator i;
    i = lists.begin();
    while (i != lists.end())
    {
        sum += *i;
        ++i;
    }
    return sum;
}
/*
int recursionCir (LISTINT lists, LISTINT::iterator i)
{
    if (i != lists.begin())
    {
        return *i + recursionCir(lists, i--);
    }
}
*/
