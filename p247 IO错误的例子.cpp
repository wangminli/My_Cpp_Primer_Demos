#include <iostream>
using namespace std;
int main()
{
	int ival;
	cin >> ival;
	cout << "ival ==" << ival <<endl; 
	
	if(cin.fail())
		cout << "失败！" <<endl;
	else 
		cout << "成功！" <<endl; 
		 
	return 0;
}
/*
运行结果：
 
asd
ival ==2147344384
失败！
*/