//p340 ？验证"string的加法操作所使用的操作数分别是string 和 const char*类型"
#include <iostream>
using namespace std;
int main()
{
	string str = "string type";
	string str2 = str + " + const char*";
	cout << str2 << endl;
	//而两个string类型相加也是可以的，尚不知情 
	string str3 = str +str2;
	cout << str3 << endl; 
 
	return 0;
}
