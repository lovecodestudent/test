/************************************************************************
*
* �ļ�����1.1.18.cpp
*
* �ļ�������д������һ���ı�text����ΪPig Latin����
*
* �����ˣ�  ������

* ʱ  �䣺  2018-07-22
*
* �汾�ţ�1.1
*
* �޸ļ�¼��if���������µ�һ���ַ�һֱ��ѭ��ת��
*
************************************************************************/

#include <iostream>
#include <string>
#include <cstring>
#include <sstream>
using namespace std;

/*================================================================
*
* �� �� ����translate
*
* ��    ����
*
*         [string]  str          : ����һ���ַ���
*
* ��������:
*
*         ��һ���ı�text����ΪPig Latin����
*
* �� �� ֵ�� ��ȷ������һ���ַ��������󣺱���
*
* �׳��쳣��
*
* ��    �ߣ� ������		2018-7-22
*
================================================================*/
char * translate(string str);
int main()
{
    /*��ʼ���ַ���*/
    string str1 = "The quick brown fox";

    /*�½�һ���ַ��������ڽ���ת������ַ���*/
    char * chs = new char[100];

    /*����ת������*/
    chs = translate(str1);

    cout << "ת������ַ���Ϊ��";
    cout << chs << endl;

    cout << "��ȷ�Ľ��Ϊ----��Hetay uickqay rownbay oxfay" << endl;
    return 0;
}

char * translate(string str)
{
    /*���������ַ���ͨ���ո�ָ�ɲ�ͬ���ַ���*/
    istringstream is(str);

    /*����һ���ַ����������ڽ��շָ����ַ���*/
    string arrays[100] ;

    /*lengthΪ�ַ�������ĳ���*/
    int length = 0;
    while (is >> arrays[length])
    {
        /*����ָ����ַ���*/
        cout << arrays[length] << " ";
        length++;
    }
    cout << endl;

    /*temp�������ڴ洢ÿ���ַ����ĵ�һ���ַ�*/
    char temp;

    /*strs���ڴ洢�޸ĺ���ַ���*/
    string strs;

    /*chs���ڷ������յĽ��*/
    char * chs = new char[100];

    /*���ѭ�����ڿ��ƴ���*/
    for (int i = 0; i < length; i++)
    {
        /*�ڲ�ѭ�����ڽ��ַ�����Ҫ�����ת��*/
        for (int j = 0; j < arrays[i].length(); j++)
        {
            /*���ַ��������еĵ�һ���ַ����ĵ�һ���ַ����Сд�ڶ����ַ���ɴ�д*/
            if (i == 0 && j ==0)
            {
                temp = arrays[i][0] + 32;
                arrays[i][1] -= 32;
                arrays[i][j] = arrays[i][j+1];
            }

            if (i == 0 && j != 0)
            {
               /*�����ַ��ŵ����ַ�����ĩβ*/
                if (j == arrays[i].length() - 1)
                {
                    arrays[i][j] = temp;
                }
                else
                {
                    arrays[i][j] = arrays[i][j+1];
                }

            }

            /*������ǵ�һ���ַ����򽫸��ַ����ĵ�һ���ַ���ֵ��temp*/
            if (i != 0 && j ==0)
            {
                temp = arrays[i][0];
                arrays[i][j] = arrays[i][j+1];
            }
            else
            {
                /*�����ַ��ŵ����ַ�����ĩβ*/
                if (j == arrays[i].length() - 1)
                {
                    arrays[i][j] = temp;
                }

                else
                {
                    arrays[i][j] = arrays[i][j+1];
                }

            }
        }

        /*�������һ���ַ�������ӿո�*/
        if (i != length - 1)
        {
            arrays[i] += "ay ";
        }

        else
        {
            arrays[i] += "ay";
        }
        strs += arrays[i];
    }

    /*��stringת����char�������ڷ���*/
    strcpy(chs, strs.c_str());
    return chs;
}
