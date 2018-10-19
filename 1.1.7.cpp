/******************************************************************
*
*�ļ�����1.1.7.cpp
*
*�ļ���������listʹ������������㷨��������
*          ֱ�Ӳ�������ϣ�����򡢼�ѡ������
*          ������ð�����򡢿������򡢹鲢����
*          ��ż���򡢳�Ƥ������
*
*�����ˣ�������
*
*ʱ�䣺2018-7-14
*
*�汾�ţ�1.1
*
*�޸ļ�¼������listд�����������õ������顣
*
******************************************************************/

/*===============================================================
*��������strightIns
*
*������
*     [int *] arr :����
*     [int] n : ���鳤��
*����������ʹ��ֱ�Ӳ������򷽷��������С��������
*
*����ֵ���޷���ֵ
*
*�׳��쳣
*
*�� �ߣ������� 2018-7-14
=============================================================== */

/*===============================================================
*��������shellSort
*
*������
*     [int *] arr :����
*     [int] n : ���鳤��
*����������ʹ��ϣ�����򷽷��������С��������
*
*����ֵ���޷���ֵ
*
*�׳��쳣
*
*�� �ߣ������� 2018-7-14
=============================================================== */

/*===============================================================
*��������chooseSort
*
*������
*     [int *] arr :����
*     [int] n : ���鳤��
*����������ʹ�ü�ѡ�����򷽷��������С��������
*
*����ֵ���޷���ֵ
*
*�׳��쳣
*
*�� �ߣ������� 2018-7-14
=============================================================== */

/*===============================================================
*��������heapAdjust
*
*������
*     [int *] arr :����
*     [int] start : �����ʼ�±�
*     [int] end   : ����ĩβ�±�
*�������������жѵ��������ѵ���Ϊ�����
*
*����ֵ���޷���ֵ
*
*�׳��쳣
*
*�� �ߣ������� 2018-7-14
=============================================================== */

/*===============================================================
*��������heapSort
*
*������
*     [int *] arr :����
*     [int] n : ���鳤��
*�������������ѣ��������������
*
*����ֵ���޷���ֵ
*
*�׳��쳣
*
*�� �ߣ������� 2018-7-14
=============================================================== */

/*===============================================================
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
*�� �ߣ������� 2018-7-14
=============================================================== */

/*===============================================================
*��������quickSort
*
*������
*     [int *] arr :����
*     [int] left : ��������±�
*     [int] right: �����Ҳ��±�
*����������ʹ��ð�����򷽷��������С��������
*
*����ֵ���޷���ֵ
*
*�׳��쳣
*
*�� �ߣ������� 2018-7-14
=============================================================== */

/*===============================================================
*��������mergeArray
*
*������
*     [int *] arr :����
*     [int] lengths : ���鳤��
*������������������һ����ԭ����ȳ�������
*
*����ֵ���޷���ֵ
*
*�׳��쳣
*
*�� �ߣ������� 2018-7-14
=============================================================== */

/*===============================================================
*��������mergeSort
*
*������
*     [int *] arr :����
*     [int] left : ����±�
*     [int] right: �Ҳ��±�
*     [int *] mergeArray: ��ʱ����
*
*�����������������ڵݹ�ֽⲢ����
*
*����ֵ���޷���ֵ
*
*�׳��쳣
*
*�� �ߣ������� 2018-7-14
=============================================================== */

/*===============================================================
*��������merges
*
*������
*     [int *] arr :����
*     [int] left : ����±�
*     [int] mid  : �м��±�
*     [int] right: �Ҳ��±�
*     [int *] mergeArray: ��ʱ����
*
*�������������ںϲ�������������
*
*����ֵ���޷���ֵ
*
*�׳��쳣
*
*�� �ߣ������� 2018-7-14
=============================================================== */

/*===============================================================
*��������oddEvenSort
*
*������
*     [int *] arr :����
*     [int] lengths : ���鳤��
*
*����������������ż����ʽ�������С��������
*
*����ֵ���޷���ֵ
*
*�׳��쳣
*
*�� �ߣ������� 2018-7-14
=============================================================== */

/*===============================================================
*��������stoogeSort
*
*������
*     [int *] arr :����
*     [int] left : ��������±�
*     [int] right: �����Ҳ��±�
*�������������ó�Ƥ������ʽ�������С��������
*
*����ֵ���޷���ֵ
*
*�׳��쳣
*
*�� �ߣ������� 2018-7-14
=============================================================== */

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
*�� �ߣ������� 2018-7-14
=============================================================== */
#include <iostream>
#include <algorithm>
using  namespace std;

/*1ֱ�Ӳ�������*/
void strightIns (int * arr, int n);

/*2ϣ������*/
void shellSort (int * arr, int n);

/*3��ѡ������*/
void chooseSort (int * arr, int n);

/*4������*/
void heapAdjust (int * arr, int start, int end);

void heapSort (int * arr, int n);

/*5ð������*/
void bubbleSort (int * arr, int n);

/*6��������*/
void quickSort (int * arr, int left, int right);

/*7�鲢����*/

/*mergeArray������������һ����ԭ����ȳ�������*/
void mergeArray (int * arr, int lengths);

/*mergeSort�������ڵݹ�ֽⲢ����*/
void mergeSort (int * arr, int left, int right, int * mergeArray);

/*merges�������ںϲ�������������*/
void merges (int *arr, int left, int mid, int right, int * mergeArray);

/*8��ż����*/
void oddEvenSort (int * arr, int lengths);

/*9��Ƥ������*/
void stoogeSort (int * arr, int left, int right);

/*��������*/
void prints (int * arr, int n);
int main()
{
    //int a[] = {19, 25, 87, 30, 26, 18};
    int a[9]={5, 4, 9, 1, 7, 6, 2, 3, 8};
    int lengths = sizeof(a) / sizeof(a[0]);
    cout << lengths << endl;

    cout << "---ֱ�Ӳ�������---" << endl;
    /*����ֱ�Ӳ�������*/
    strightIns (a, lengths);
    /*������ʾ����*/
    prints (a, lengths);

    cout << "---ϣ������---" << endl;
    /*����ϣ������*/
    shellSort(a, lengths);
    /*������ʾ����*/
    prints (a, lengths);

    cout << "---��ѡ������---" << endl;
    /*���ü�ѡ������*/
    chooseSort (a, lengths);
    /*������ʾ����*/
    prints (a, lengths);

    cout << "---������---" << endl;
    /*���ö�����*/
    heapSort(a, lengths);
    /*������ʾ����*/
    prints (a, lengths);

    cout << "---ð������---" << endl;
    /*����ð������*/
    bubbleSort(a, lengths);
    /*������ʾ����*/
    prints (a, lengths);

    cout << "---��������---" << endl;
    /*���ÿ�������*/
    quickSort(a, 0, lengths - 1);
    /*������ʾ����*/
    prints (a, lengths);

    cout << "---�鲢����---" << endl;
    /*���ù鲢����*/
    mergeArray (a, lengths);
    /*������ʾ����*/
    prints (a, lengths);

    cout << "---��ż����---" << endl;
    /*������ż����*/
    oddEvenSort (a, lengths);
    /*������ʾ����*/
    prints (a, lengths);

    cout << "---��Ƥ������---" << endl;
    /*������ż����*/
    stoogeSort (a,0, lengths - 1);
    /*������ʾ����*/
    prints (a, lengths);

    return 0;
}

/*1ֱ�Ӳ�������*/
void strightIns (int * arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        /*�ҵ�a[i]�����λ��*/
        int j;
        for (j = i -1; j >= 0; j--)
        {
            if (arr[i] > arr[j])
                break;
        }

        /*������λ�ú��Ԫ�����κ���*/
        if (j != i - 1)
        {
            int temp = arr[i];
            for (int k = i - 1; k > j; k --)
            {
                arr[k+1] = arr[k];
            }
            arr[j+1] = temp;
        }
    }
}

/*2ϣ������*/
void shellSort (int * arr, int n)
{
    int gap;

    /*��һ��ѭ����ȡ����ֵ*/
    for (gap = n / 2; gap > 0; gap /= 2)
    {
        /*�ڶ���ѭ�����м���ѭ������*/
        for (int i = 0; i < gap; i ++)
        {
            /*������ѭ����ÿ�鼸��Ԫ��ѭ������*/
            for (int j = i + gap; j < n; j++ )
            {
                /*ֱ�Ӳ�������*/
                if (arr[j - gap] > arr[j])
                {
                    int temp = arr[j];
                    int k = j - gap;
                    while(k >= 0 && arr[k] > temp)
                    {
                        arr[k+gap] = arr[k];
                        k -= gap;
                    }
                    arr[k] = temp;
                }
            }
        }
    }
}

/*3��ѡ������*/
void chooseSort (int * arr, int n)
{
    /*���ѭ�����ڿ��ƱȽϴ���*/
    for (int i = 0; i < n; i++)
    {
        int min = i;
        /*�ڲ�ѭ���ҳ�ÿ�αȽϵ���С�±�*/
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
                min = j;
        }
        /*����С�±����ʱ������Ӧ��ֵ*/
        if(min != i)
        {
            int temp ;
            temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
}

/*4������*/
void heapAdjust (int * arr, int start, int end)
{
    /*�������ӽ��*/
    int dad = start;
    int son = 2 * dad + 1;
    /*�ӽ���ڷ�Χ�ڲŽ��бȽ�*/
    while (son <= end)
    {
        /*�Ƚ����ҽ�㣬ѡ������*/
        if (son + 1 <= end && arr[son] < arr[son + 1])
            son++;
        /*������ڵ�����ӽ����������ѭ��*/
        if (arr[son] < arr[dad])
            break;
        /*������н���*/
        else
        {
            /*�����������ӽ��*/
            swap(arr[son], arr[dad]);
            dad = son;
            son = dad * 2 + 1;
        }
    }
}

void heapSort (int * arr, int n)
{
    /*���Ѳ�������г�ʼ��*/
    for (int i = n / 2 - 1; i >= 0; i--)
    {
        heapAdjust(arr, i, n - 1);
    }
    /*���ú�Ķѣ�������β����λ�ã������½���*/
    for (int j = n - 1; j > 0; j--)
    {
        swap(arr[0], arr[j]);
        heapAdjust(arr, 0, j - 1);
    }
}

/*5ð������*/
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

/*6��������*/
void quickSort (int * arr, int left, int right)
{
    if(left > right)
        return;
    /*tempΪ��׼��*/
    int temp = arr [left];
    int i = left;
    int j = right;
    while (i != j)
    {
        /*��׼������߿�ʼ�����ұ߿�ʼ��*/
        while (arr[j] >= temp && j > i)
            j--;
        while (arr[i] <= temp && j > i)
            i++;
        if(i < j)
        /*������Ӧλ�õ�ֵ*/
            swap(arr[i], arr[j]);
    }
    /*��ʱi��j��ͬ��������λ�õ�ֵ�ͻ�׼ֵ����*/
    arr[left] = arr[i];
    arr[i] = temp;
    /*�ݹ������ߺ��ұ�*/
    quickSort(arr, left, i - 1);
    quickSort(arr, i + 1, right);
}

/*7�鲢����*/
void mergeArray (int * arr, int lengths)
{
    /*�½�һ����ʱ�������ڴ�űȽϺ������Ԫ��*/
    int * temp =new int [lengths - 1];
    mergeSort(arr, 0, lengths - 1, temp);
}

void mergeSort (int * arr, int left, int right, int * mergeArray)
{
    if (left > right)
    {
        int mid = (left + right) / 2;
        /*����߽��й鲢����*/
        mergeSort (arr, left, mid, mergeArray);
        /*���ұ߽��й鲢����*/
        mergeSort(arr, mid + 1, right, mergeArray);
        /*��������������ϲ���һ����������*/
        merges(arr, left, mid, right, mergeArray);
    }
}

void merges (int *arr, int left, int mid, int right, int * mergeArray)
{
    /*������ָ��*/
    int i = left;
    /*������ָ��*/
    int j = mid + 1;
    /*��ʱָ��*/
    int a = 0;
    /*�����������зֱ����ʼλ�ÿ�ʼ�Ƚϣ�����С�ĸ�ֵ����ʱ����*/
    while (i <= mid && j <= right)
    {
        if (arr[i] <= arr[j])
        {
            mergeArray[a] = arr[i];
            i++;
            a++;
        }
        else
        {
            mergeArray[a] = arr[j];
            j++;
            a++;
        }
    }
    /*����߻����ұ�����һ������Ԫ�رȽ���󣬽�ʣ�������Ԫ��ֱ���ƶ�����ʱ������*/
    while (i <= mid )
    {
        /*�����ʣ��Ԫ���ƶ�����ʱ������*/
        mergeArray[a] = arr[i];
        i++;
        a++;
    }
    while (j <= right )
    {
        /*���ұ߱�ʣ��Ԫ���ƶ�����ʱ������*/
        mergeArray[a] = arr[j];
        j++;
        a++;
    }
    /*����ʱ���鸳ֵ��ԭʼ����*/
    for (int m = 0; m < right; m++)
    {
        arr[i] = mergeArray[i];
    }
}

/*8��ż����*/
void oddEvenSort (int * arr, int lengths)
{
    bool sorted = false;
    while (!sorted)
    {
        sorted = true;
        /*ÿ�ν�������ѭ������ѭ����żѭ����*/
        for (int i = 0; i < 2; i++)
        {
            /*ÿ��ѭ��ʱ���к��ұߵ������бȽ�*/
            for (int j = 0; j < lengths - 1; j += 2)
            {
                if (arr[j] > arr[j+1])
                {
                    swap(arr[j], arr[j+1]);
                    sorted = false;
                }
            }
        }
    }
}

/*9��Ƥ������*/
/*
������һ��ֵС�ڵ�һ��ֵ���򽻻���������
�����ǰ����Ԫ���������ڵ���3��
    1.ʹ�ó�Ƥ������ǰ2/3��Ԫ��
    2.ʹ�ó�Ƥ�������2/3��Ԫ��
    3.�ٴ�ʹ�ó�Ƥ������ǰ2/3��Ԫ��
*/
void stoogeSort (int * arr, int left, int right)
{
    if (arr[left] > arr[right])
    {
        swap(arr[left], arr[right]);
    }
    if ((right - left + 1) > 3)
    {
        int t = (right - left + 1 ) / 3;
        stoogeSort (arr, left, right - t);
        stoogeSort (arr, left + t, right);
        stoogeSort (arr, left, right - t);
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
