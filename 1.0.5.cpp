/*************************************************
*�ļ�����1.0.5.cpp
*
*�ļ����������1��n��3��5�ı����ĺ�
*
*�����ˣ�������
*
*ʱ�䣺2018-7-12
*
*�汾�ţ�1.0
*
*�޸ļ�¼������a��ֵʱ��0��ʼ��
*
*************************************************/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    int b[n];
    int k = 0;
    int sum = 0;

    /*����a���и�ֵ*/
    for (int i = 0; i < n; i++)
    {
        a[i] = i+1;
    }

    /*���ܱ�3����5���������ŵ�����b��*/
    for (int j = 0; j < n; j++)
    {

        if (a[j] % 3 == 0 || a[j] % 5 == 0)
        {
            b[k] = a[j];
            k++;
        }
    }
    cout << k << endl;

    /*������b�������*/
    for (int m = 0 ; m < k ; m++)
    {
        sum += b[m];
    }
    cout << sum << endl;
    return 0;
}