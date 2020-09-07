#include <iostream>

using namespace std;

class Human { // 定义一个类
    public:   // 公开的部分 -> 可以被直接在外部访问
        int sex;
        int age;
        string name;
};

class Man : public Human{ // 继承了Human的特性
    public:
        int hair;
        int show(){
            cout << "hair: " << hair << " sex: " << sex << " age: " << age << " name: " << name << endl;
            return 0;
        };
};

int main(int argc, char const *argv[])
{
    Man m;
    m.sex = 1;
    m.age = 20;
    m.name = "John";
    m.hair = 1;
    m.show();
    cout << "Hello" << endl;
    return 0;
}
