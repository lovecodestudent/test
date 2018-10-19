/*********************************************************************
*
*�ļ�����1.1.10.cpp
*
*�ļ�������д����������ϲ������б����磺[a,b,c], [1,2,3] �� [a,1,b,2,c,3]��
*
*�����ˣ�������
*
*ʱ�䣺2018-7-18
*
*�汾�ţ�1.1
*
*�޸ļ�¼����дif����������ж������ټ���һ����
*
*********************************************************************/

/*==============================================================
*��������listRand
*
*������
*     [LISTINT] lists :LISTINT����
*     [int] n : list�ĳ���
*     [int] select:ѡ���������ֻ����ַ�
*�����������������һ��list
*
*����ֵ����ȷ������һ��LISTCHAR���� ���󣺱���
*
*�׳��쳣
*
*�� �ߣ������� 2018-7-18
==============================================================*/

/*==============================================================
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
*�� �ߣ������� 2018-7-18
==============================================================*/
#include <iostream>
#include <list>
#include <numeric>
#include <algorithm>
#include <time.h>
using namespace std;

/*����һ��list������ʵ��LISTCHAR*/
typedef list<int> LISTCHAR;

/*�������һ��list*/
LISTCHAR listRand (LISTCHAR lists, int n, int select);

/*����list*/
void Traversal (LISTCHAR lists);

int main()
{
    /*n1��n2�ֱ��������������list�ĳ���*/
    int n1;
    cin >> n1;

    int n2;
    cin >> n2;
    srand(time(NULL));

    /*��LISTINT��������ist����*/
    LISTCHAR listOne;
    LISTCHAR listTwo;

    /*listThreeΪ������źϲ����list*/
    LISTCHAR listThree;

    /*����iΪ������*/
    LISTCHAR::iterator i;
    LISTCHAR::iterator j;

    /*�����������list*/
    listOne = listRand (listOne, n1, 1);
    cout << "��һ��list��ֵΪ�� ";
    Traversal (listOne);

    listTwo = listRand (listTwo, n2, 2);
    cout << "�ڶ���list��ֵΪ�� ";
    Traversal (listTwo);

    i = listOne.begin();
    j = listTwo.begin();
    while (n1 != 0 && n2 != 0)
    {
        /*������listOne��listTwo��Ԫ��*/
        listThree.push_back(char(*i));
        listThree.push_back(char(*j));
        i++;
        j++;
        n1--;
        n2--;
    }
    if (n1 == 0 && n2 != 0)
    {
        listThree.push_back(char(*j));
        j++;
        n2--;
    }
    if (n1 != 0 && n2 == 0)
    {
        listThree.push_back(char(*i));
        i++;
        n1--;
    }
    cout << "�ϲ����list��ֵΪ�� ";
    Traversal(listThree);
    return 0;
}

/*��������ַ�������*/
LISTCHAR listRand (LISTCHAR lists, int n, int select)
{
    /* Ҫȡ��[a,b]�����������ʹ��(rand() % (b-a+1))+ a */
    for (int i = 0; i < n; i++)
    {
        char u;
        if (select == 1)
        {
            /*u��ȡ��ֵΪ0-9��ASCIIֵ*/
             u = (rand() % (57-48+1))+ 48;
        }
        if (select == 2)
        {
             /*u��ȡ��ֵΪa-z��ASCIIֵ*/
             u = (rand() % (122-97+1))+ 97;
        }
        /*��list�������������*/
        lists.push_back(u);
    }
    return lists;
}

void Traversal (LISTCHAR lists)
{
    /*����iΪ������*/
    LISTCHAR::iterator i;

    /*����list*/
    for (i = lists.begin(); i != lists.end(); ++i)
    {
        cout << char (*i) << " ";
    }
    cout << endl;
}
