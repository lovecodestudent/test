#include <iostream>
using namespace std;
int main()
{
    int a = 100;
    char b = 100;
    //cout << b;
    int a1[10]={1,2,3,4,5,6,7,8,9,10};
    int lengths = sizeof(a1) / sizeof(a1[0]);
    cout << lengths;
    return 0;
}
