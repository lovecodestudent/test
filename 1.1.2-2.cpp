/*********************************************************************
*
*�ļ�����1.1.2-1.cpp
*
*�ļ�����������һ���յ�list��������������ĸ����ռ䣬ʵ����1������list����ת
*
*�����ˣ�������
*
*ʱ�䣺2018-7-13
*
*�汾�ţ�1.1
*
*�޸ļ�¼������ֱ��ʹ��C++�е�reverse������͵���ˡ�
*
*********************************************************************/
#include <iostream>
#include <list>
#include <numeric>
#include <algorithm>
#include <time.h>
using namespace std;

/*����һ��list������ʵ��LISTINT*/
typedef list<int> LISTINT;
int main()
{
    int n ;
    cin >> n;
    srand(time(NULL));

    /*��LISTINT����һ����ΪlistOne��list����*/
    LISTINT listOne;

   /*��LISTINT����һ����ΪlistTwo��list����*/
    LISTINT listTwo;

   /*����iΪ������*/
    LISTINT::iterator i;
    cout << "�����������" <<endl;
    for (int i = 0; i < n; i++)
    {
        int u = (double)rand() / (RAND_MAX + 1) * (100 - 1) + 1;

        /*��listOne�������������*/
        cout << u << " ";
        listOne.push_back(u);
    }
    cout << endl;

    /*����list*/
    reverse(listOne.begin(), listOne.end());
    cout << "������ת��Ľ��" << endl;
    for (i = listOne.begin(); i != listOne.end(); ++i)
    {
        cout << *i << " ";
    }
    return 0;
}
