#include <iostream>
using namespace std;
int main()
{
    char a[] = "liudw2";
    cout << a << endl;
    cout << a+1 << endl;//???为什么
    char* b = "liudw2";
    cout << *b << endl;
    cout << b << endl;
    return 0;
}
//结果：
/*liudw2
  iudw2
  l
  liudw2*/