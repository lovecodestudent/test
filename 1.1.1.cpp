/******************************************************************
*
*�ļ�����1.1.1.cpp
*
*�ļ���������������N���������N������list��дһ������������list��������.
*
*�����ˣ�������
*
*ʱ�䣺2018-7-13
*
*�汾�ţ�1.0
*
*�޸ļ�¼��
*
******************************************************************/
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
    return 0;
}
