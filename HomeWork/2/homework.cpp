#include <iostream>
using namespace std;
int main()
{
    double a;
    char c[8];
    char *f;
    int i;
    f = (char *)&a;
    cout << "请输入浮点数:";
    cin >> a;
    cout << endl;
    for (i = 0; i < 8; i++)
    {
        c[i] = *(f + i);
    }
    cout << "二进制数：" << endl;
    for (int i = 7; i >= 0; i--)
    {
        for (int x = 7; x >= 0; x--)
        {
            cout << ((c[i] >> x) & 1);
        }
    }
    cout << endl;
    return 0;
}