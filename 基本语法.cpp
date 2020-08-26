#include <iostream>

using namespace std;

//  声明一个类
class People
{
private: // 不能直接访问到 需要通过public的方法访问
    string name;
    int age;
    int score;

public: // 可以被调用的
    void insert(string Name, int Age, int Score)
    {
        name = Name;
        age = Age;
        score = Score;
    }
    void show()
    {
        cout << "name= " << name << "  age= " << age << "  score= " << score << endl;
    }
};

int main(int argc, char const *argv[])
{
    cout << "Hello world!" << endl; // cout -> 是个流 把Hello world 和 endl 加入到流中从而输出出来
    enum ClassName                  // 枚举  -> 这个类型要求只能被赋值为这几个值
    {
        Math = 1,
        Chinese = 2,
        English = 3
    };
    ClassName Class1 = Math;
    cout << "Class1:" << Class1 << endl;

    cout << endl;

    People Xiaoming;                      // 从类定义一个对象
    Xiaoming.insert("Xiaoming", 19, 100); // 利用对象的方法去改变属性
    Xiaoming.show();
    return 0;
}
