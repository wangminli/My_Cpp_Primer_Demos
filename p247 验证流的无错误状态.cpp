#include <iostream>
using namespace std;
int main()
{
	int i;
//	cin >> i;//去掉此句有问题，待解 
	if(cin >> i)
	{
		cout << "cin接收输入成功！" <<endl; 
	} 
	else
	{
		cout << "cin接收输入失败！" <<endl; 
	}
	
	while (cin >> i )
	{
		cout << "cin接收输入成功！" <<endl; 
	} 
 
	return 0;
}
