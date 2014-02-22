/*

常含义	     fail标志位	  oef标志位  bad标志位
ios::goodbit	0			0			0 
ios::badbit		0			0			1
ios::eofbit		0			1			0
ios::failbit	1			0			0


*/ 
#include <iostream>
#include<stdexcept>
using namespace std;
int main()
{
	int ival;
 	cout << "请输入：" <<endl; 
 	cin >> ival;
 	//cin的4种状态 
	cout << cin.goodbit;
	cout << cin.badbit;
	cout << cin.eofbit;
	cout << cin.failbit;
	
 	cout <<endl;
	return 0;
}
/*
运行结果：
0124 
*/
