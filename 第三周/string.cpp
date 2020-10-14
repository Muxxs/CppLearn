#include <iostream>

using namespace std;
int main(int argc, char const *argv[])
{
    // 字符串输入
    string s[10];
    for (int i = 0; i < 10;i++)
    {
        getline(cin, s)
        s.append(s);
    }
    for (int i = 0; i < sizeof(s)/sizeof(s[0]); i++)
    {
        cout << s[i] << endl;
    }    
    return 0;
}
