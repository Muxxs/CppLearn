#include <iostream>
#include <sstream>
#include <fstream>


using namespace std;

void DefNumber(string Num){
    int TheNumber = stoi(Num);
    if (TheNumber%)
    {
        /* code */
    }
}

void GetPerWord(string s){
    string One="";
    string Space=" ";
    for (int i = 0; i < sizeof(string); i++)
    {
        if (s[i] != Space[0])
        {
            One+=s[i];
        }else{
            DefNumber(One);
            One = "";
        }
    }
}


int main(int argc, char const *argv[])
{
    string s;
    ifstream in("aaa.txt");
    for (string i; getline(in, s);)
    {
        GetPerWord(s);
    }
    return 0;
}
