#include <iostream>
using namespace std;
int main()
{
    char a[] = "liudw2";
    cout << a << endl;
    cout << a+1 << endl;//???Ϊʲô
    char* b = "liudw2";
    cout << *b << endl;
    cout << b << endl;
    return 0;
}
//�����
/*liudw2
  iudw2
  l
  liudw2*/