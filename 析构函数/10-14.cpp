#include <iostream>

using namespace std;

class student
{
private:
    int num;
    int score;

public:
    student(int Num, int Score) : num(Num), score(Score) {} // 构造函数，对参数进行赋值
    ~student() {}                                           // 析构函数 释放内存
};

int main(int argc, char const *argv[])
{
    cout << "Hello" << endl;
    int i = 0;
    for (int d = 0; d < 10; d++)
    {
        cout << "d : " << d << endl;
    }

    return 0;
}
