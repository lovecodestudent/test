/******************************************************************
*�ļ�����1.0.2-3.cpp
*
*�ļ������������û����������ø������������к�,�Ľ���ֻ��Alice��Bob���к���
*
*�����ˣ�������
*
*ʱ�䣺2018-7-12
*
*�汾�ţ�1.1
*
*�޸ļ�¼��ֱ��ͨ����==���Ƚϣ���Ϊ���ú���compare
*
***********************************************************************/
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string name;
    cin >> name;

    /*�����ַ����ȽϺ���*/
    int num1 = name.compare("Alice");
    int num2 = name.compare("Bob");
    if (num1 == 0 || num2 == 0)
    {
        cout << name << "���" << endl;
    }
    else
        cout << "��������" <<endl;
    return 0;
}
