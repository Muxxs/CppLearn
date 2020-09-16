#include <iostream>

using namespace std;
int main(int argc, char const *argv[])
{
    int a = 10;
    const int b = 15;
    const int *BConstPointer = &b; // 指向const int 的指针不能是int* 是 const int *
    int const *BPointer = &b;      // 可变的指针 可以指向不同的常变量
    int *APointer = &a;            // 可变的指针
    const int *AConstPointer = &a; // 指向的位置不能改变
    cout << *APointer << endl;
    return 0;
}
