//输出char*型的字符串 
#include <iostream>
using namespace std;
int main()
{
    char a[] = "liudw2";
    cout << a << endl;//a1
    cout << a+1 << endl;//a2

    char* b = "liudw2";
    cout << *b << endl;//b1
    cout << b << endl;//b2
    cout << b+1 << endl;//b3
    cout << *(b+1) << endl;//b4
    return 0;
}
/*
liudw2
iudw2
l
liudw2
iudw2
i
请按任意键继续. . .
*/ 