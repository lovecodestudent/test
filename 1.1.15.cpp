/************************************************
*
*�ļ�����1.1.15.cpp
*
*�ļ�������д����������һ���ַ����Ƿ��ǻ���
*�����ˣ�������
*
*ʱ�䣺2018-7-19
*
*�汾�ţ�1.0
*
*�޸ļ�¼��
*
************************************************/

/*================================================================
*��������palindrome
*
*������
*     [string] str : �����ַ�
*�����������ж�������ַ��Ƿ�Ϊ�����ַ�
*
*����ֵ����ȷ������true   ����false
*
*�׳��쳣
*
*�� �ߣ������� 2018-7-19
================================================================*/
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

/*�ж��ַ��Ƿ��ǻ���*/
bool palindrome (string str);
int main()
{
    string str;
    cin >> str;
    if (palindrome(str))
    {
        cout << str << "���ǻ����ַ�" << endl;
    }
    else
    {
        cout << str << "�����ǻ����ַ�" << endl;
    }
    return 0;
}

/*����һ���ַ����ж��ǲ��ǻ����ַ�*/
bool palindrome (string str)
{
    /*����ʼֵ����Ϊtrue*/
    bool result = true;
    int length = str.length();

    /*����β�ַ��Ƚ�*/
    for (int i = 0; i < length / 2; i++)
    {
        /*���ַ���ͬʱ��result��ֵΪfalse*/
        if (str[i] != str[length - 1 -i])
        {
            result = false;
            break;
        }
    }
    return result;
}
