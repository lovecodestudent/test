/**********************************************************************
*
*�ļ�����1.1.9.cpp
*
*�ļ������������������list A,B��дһ������������A��B����list
*
*�����ˣ�������
*
*ʱ�䣺2018-7-17
*
*�汾�ţ�1.0
*
*�޸ļ�¼��
*
**********************************************************************/

/*===============================================================
*��������listRand
*
*������
*     [LISTINT] lists :LISTINT����
*     [int] n : list�ĳ���
*�����������������һ��list
*
*����ֵ����ȷ������һ��LISTINT���� ���󣺱���
*
*�׳��쳣
*
*�� �ߣ������� 2018-7-17
=============================================================== */

/*===============================================================
*��������Traversal
*
*������
*     [LISTINT] lists :LISTINT����
*��������������list
*
*����ֵ���޷���ֵ
*
*�׳��쳣
*
*�� �ߣ������� 2018-7-17
=============================================================== */
#include <iostream>
#include <list>
#include <numeric>
#include <algorithm>
#include <time.h>
using namespace std;

/*����һ��list������ʵ��LISTINT*/
typedef list<int> LISTINT;

/*�������һ��list*/
LISTINT listRand (LISTINT lists, int n);

/*����list*/
void Traversal (LISTINT lists);

int main()
{
    int n ;
    cin >> n;
    srand(time(NULL));

    /*��LISTINT��������ist����*/
    LISTINT listOne;
    LISTINT listTwo;

    /*����iΪ������*/
    LISTINT::iterator i;

    /*�����������list*/
    listOne = listRand (listOne, n);
    cout << "��һ��list��ֵΪ�� ";
    Traversal (listOne);

    listTwo = listRand (listTwo, n);
    cout << "�ڶ���list��ֵΪ�� ";
    Traversal (listTwo);

    i = listOne.begin();
    i++;

    /*����splice����*/
    listOne.splice(i, listTwo);
    cout << "�ϲ����listΪ�� ";
    Traversal (listOne);
    return 0;
}

LISTINT listRand (LISTINT lists, int n)
{
    for (int i = 0; i < n; i++)
    {
        int u = (double)rand() / (RAND_MAX + 1) * (100 - 1) + 1;

        /*��listOne�������������*/
        lists.push_back(u);
    }
    return lists;
}

void Traversal (LISTINT lists)
{
    /*����iΪ������*/
    LISTINT::iterator i;

    /*����list*/
    for (i = lists.begin(); i != lists.end(); ++i)
    {
        cout << *i << " ";
    }
    cout << endl;
}
