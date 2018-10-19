/******************************************************************************
*�ļ�����1.1.16.cpp
*
*�ļ�������дһ��������һ���ı�text��Сд����
*�����ˣ�������
*
*ʱ�䣺2018-7-19
*
*�汾�ţ�1.2
*
*�޸ļ�¼�����һ���ַ��ظ���������޸ĺ���ַ�д�뵽txt�ı���ʱopen��������
*
*********************************************************************************/

/*================================================================
*
* �� �� ����readTxt
*
* ��    ����
*
*         [string]  file		 : ָ���ļ���·��
*
*
* ��������:
*
*         ��ȡָ���ļ�������
*
* �� �� ֵ�� �ɹ������ļ������ݣ�ʧ�ܱ���
*
* �׳��쳣��
*
* ��    �ߣ� ������		2018-7-19
*
================================================================*/

/*================================================================
*
* �� �� ����writeTxt
*
* ��    ����
*
*         [string]  file		 : ָ���ļ���·��
*         [string]  str          : Ҫд����ַ���
*
* ��������:
*
*         ��ָ��������д�뵽ָ�����ı���
*
* �� �� ֵ�� �޷���ֵ
*
* �׳��쳣��
*
* ��    �ߣ� ������		2018-7-19
*
================================================================*/

/*================================================================
*
* �� �� ����traversals
*
* ��    ����
*
*         [string]  str          : Ҫת�����ַ���
*
* ��������:
*
*         �����������ַ���
*
* �� �� ֵ�� �޷���ֵ
*
* �׳��쳣��
*
* ��    �ߣ� ������		2018-7-19
*
================================================================*/

/*================================================================
*
* �� �� ����convert
*
* ��    ����
*
*         [string]  str          : Ҫת�����ַ���
*
* ��������:
*
*         ���������ַ������д�Сдת��
*
* �� �� ֵ�� ��ȷ������ת������ַ��������󣺱���
*
* �׳��쳣��
*
* ��    �ߣ� ������		2018-7-19
*
================================================================*/
#include <iostream>
#include <string>
#include <fstream>
#include <cassert>
#include <cstdlib>
using namespace std;

/*��ȡָ���ļ��е�����*/
char * readTxt(string file);

/*������д�뵽ָ���ļ���*/
void writeTxt(string file, string str);

/*������ǰ�ַ���*/
void traversals(string str);

/*�Ե�ǰ�ַ������д�Сдת��*/
char * convert(string str);
int main()
{
    /*ָ��·��*/
    string file = "F:\\TestString.txt";

    /*��ȡָ���ı������ݲ�����*/
    char * arrays = readTxt(file);

    string str = arrays;

    /*����ȡ�������ݽ��д�Сдת��������*/
    traversals(str);

    string str1 = convert(str);

    /*��ת���������д�뵽�ļ���*/
    writeTxt(file, str1);

    return 0;
}

/*��ȡָ���ļ��е�����*/
char * readTxt(string file)
{
    ifstream infile;

    /*���ļ����������ļ���������*/
    infile.open(file.data());

    /*��ʧ��,�����������Ϣ,����ֹ��������*/
    assert(infile.is_open());

    char c;
    char * arrays = new char[100];
    int i = 0;

    /*���ַ���ȡ�ļ��е�����*/
    while (!infile.eof())
    {
            infile >> c;

            /*Ϊ�˱������һ���ַ��ظ���ȡ*/
            if(infile.fail())
            {
                break;
            }
            arrays[i] = c;
            i++;
    }

    /*�ر��ļ�������*/
    infile.close();
    return arrays;
}

/*������ǰ�ַ���*/
void traversals(string str)
{
    int length = str.length();
    for (int i = 0; i < length; i++)
    {
        cout << str[i];
    }
    cout << endl;
}

/*�Ե�ǰ�ַ������д�Сдת��*/
char * convert(string str)
{
    char * ch = new char[100];
    int length = str.length();

    /*ͨ��ASSIC�������д�Сдת��*/
    for (int i = 0; i < length; i++)
    {
        if (str[i] >= 65 && str[i] <= 90)
        {
            str[i] += 32;
            ch[i] = str[i];
        }
        else
        {
            str[i] -= 32;
            ch[i] = str[i];
        }
        cout << str[i];
    }
    cout << endl;

    return ch;
}

/*������д�뵽ָ���ļ���*/
void writeTxt(string file, string str)
{
    ofstream outFile;

    /*c_str()������һ��const char*ָ�룬ָ���Կ��ַ���ֹ������*/
    outFile.open(file.c_str());
    int length = str.length();

    /*��ת������ַ�д��*/
    for (int i = 0; i < length; i++)
    {
        outFile << str[i];
    }
    outFile.close();
}
