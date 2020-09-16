#include <iostream>
using namespace std;


void print(unsigned char c[], int N)
{

    for (int i = N - 1; i >= 0; i--)
    {
        for (int j = N - 1; j >= 0; j--)
            if ((c[i] >> j) & 1)
                cout << '1';
            else
                cout << '0';
    }
    cout << endl;
}
int main()
{
    double a;
    unsigned char c_save[8], cr;
    unsigned char *f;
    int i;
    f = (unsigned char *)&a;
    cout << "请输入一个浮点数:";
    cin>>a;cout<<endl;
    for (i = 0; i < 8; i++)
    {
        cr = c_save[i] = *(f + i);
    }
    cout << "此浮点数的二进制数是：" << endl;
    print(c_save, 8);
    cout << endl;
    return 0;
}