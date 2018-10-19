/****************************************************************
*文件名：1.0.9.cpp
*
*文件描述：写一个竞猜游戏，用户必须猜一个秘密的数字，
*          在每次猜完后程序会告诉用户他猜的数是太大了还是太小了，直到猜测正确，
*          最后打印出猜测的次数。如果用户连续猜测同一个数字则只算一次（注意用户交互方法）。
*
*创建人：凡定坤
*
*时间：2018-7-13
*
*版本号：1.0
*
*修改记录：数组重复元素，删除出现问题
*
****************************************************************/

/*==============================================================
*函数名：sorts
*
*参数：
*     [int] length :数组长度
*     [int] *array :数组
*功能描述：对数组元素进行排序
*
*
*返回值：无返回值
*
*抛出异常
*
*作 者：凡定坤 2018-7-13
==============================================================*/

/*==============================================================
*函数名：removeDul
*
*参数：
*     [int] length :数组长度
*     [int] *array :数组
*功能描述：
*         去除数组中的重复元素
*
*返回值：成功int类型，失败报错
*
*抛出异常
*
*作 者：凡定坤 2018-7-13
==============================================================*/
#include <iostream>
using namespace std;

/*采用冒泡排序对数组元素进行排序*/
void sorts (int * array, int length);

/*去除数组中重复的元素*/
int removeDul(int * array, int length);
int main()
{
    int n = 100;
    int k = 0;
    int f = 0;
    int * array = new int [100];
    while(true)
    {
        int m ;
        cout << "请输入你猜测的数字" << endl;
        cin >> m;
        array[k] = m;
        k++;
        if (m > 100)
        {
            cout << "你输入的数字过大，请重新输入" << endl;
        }
        if (m < 100)
        {
            cout << "你输入的数字过小，请重新输入" << endl;
        }
        if (m == 100)
        {
            cout << "恭喜你，猜测成功" << endl;
            cout << "-----------------" << endl;
            cout << "k " << k << endl;

            /*调用排序函数*/
            sorts(array, k);

            /*输出排序后的函数*/
            for (int i = 0; i < k; i++)
            {
                cout << array[i] << " ";
            }

            /*调用去重函数*/
            int num = removeDul(array, k);
            cout << "输入总次数为" << num << endl;
            break;
        }
    }
    return 0;
}

/*冒泡排序*/
void sorts (int * p, int length)
{
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length - i - 1; j++)
        {
            if (p[j] > p[j + 1])
            {
                int exchange = 0;
                exchange = p[j+1];
                p[j+1] = p[j];
                p[j] = exchange;
            }
        }
    }
}

int removeDul(int * array, int length)
{
    if (length == 0)
        return 0;
    int index = 1;
    for (int i = 1; i < length; i++)
    {
        if (array[i] != array[i-1])
        {
            array[index++] = array[i];
        }
    }
    return index;
}
