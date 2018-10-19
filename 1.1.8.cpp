/***********************************************************************
*
*�ļ�����1.1.8.cpp
*
*�ļ�������д������������ָ����������list�е�λ�ã�ʹ�ö��ֲ��ң��۰����ʵ�֣�
*
*�����ˣ�������
*
*ʱ�䣺2018-7-17
*
*�汾�ţ�1.0
*
*�޸ļ�¼��
*
***********************************************************************/

/*
*��������bubbleSort
*
*������
*     [int *] arr :����
*     [int] n : ���鳤��
*����������ʹ��ð�����򷽷��������С��������
*
*����ֵ���޷���ֵ
*
*�׳��쳣
*
*�� �ߣ������� 2018-7-17
*/

/*===============================================================
*��������binarySearch
*
*������
*     [int *] arr :����
*     [int] key: ָ��ֵ
*     [int] n : ���鳤��
*�������������ö��ַ����ҳ�ָ��ֵ���±�
*
*����ֵ����ȷ�������±� ���󣺷���-1
*
*�׳��쳣
*
*�� �ߣ������� 2018-7-17
===============================================================*/

/*===============================================================
*��������prints
*
*������
*     [int *] arr :����
*     [int] n : ���鳤��
*�������������������ǰ����
*
*����ֵ���޷���ֵ
*
*�׳��쳣
*
*�� �ߣ������� 2018-7-17
===============================================================*/
#include <iostream>
#include <algorithm>
#include <numeric>
#include <time.h>
using namespace std;

/*ð������*/
void bubbleSort (int * arr, int n);

/*��������*/
void prints (int * arr, int n);

/*���ֲ���*/
int binarySearch (int * arr, int key, int n);
int main()
{
    int n = 10;
    srand(time(NULL));
    int arr[n];

    /*�������һ������*/
    for (int i = 0; i < n; i++)
    {
        int u = (double)rand() / (RAND_MAX + 1) * (100 - 1) + 1;
        arr[i] = u;
    }

    cout << "---------����ǰ---------" << endl;

    /*����ǰ���*/
    prints(arr, n);
    int key = arr[3];

    /*�����ɵ������������*/
    bubbleSort (arr, n);

    cout << "---------�����---------" << endl;

    /*��������*/
    prints(arr, n);

    int i = binarySearch (arr, key, n);
    cout << key << "����λ�õ��±�Ϊ��" << i << endl;
    return 0;
}

/*ð������*/
void bubbleSort (int * arr, int n)
{
    /*���ѭ����������*/
    for (int i = n - 1; n > 0; n--)
    {
        /*�ڲ�ѭ�����ƱȽϴ���*/
        for(int j = 0; j < i ; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

/*��������*/
void prints (int * arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

/*���ֲ���*/
int binarySearch (int * arr, int key, int n)
{
    int begin = 0;
    int end = n -1;
    int result = -1;
    while (begin <= end)
    {
        /*ȷ���м�ֵ���±�*/
        int mid = (end - begin) / 2 + begin;

        /*����м�ֵ��ָ��ֵ����������߿�ʼ������*/
        if (arr[mid] > key)
        {
            end = mid - 1;
        }

        /*����м�ֵ��ָ��ֵС��������ұ߿�ʼ������*/
        else if (arr[mid] < key)
        {
            begin = mid + 1;
        }
        else
        {
            result = mid;
            break;
        }
    }
    return result;
}
