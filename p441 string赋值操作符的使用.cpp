//p441 string赋值操作符的使用 
#include <iostream>
#include <vector>
#include <iterator> 
#include <algorithm>
#include <numeric>
using namespace std;
int main()
{
	//string strchar2 = 'b'; 					//bug：没有这样的构造函数 
	string strchar ;
	strchar = 'a';

	cout << strchar <<endl; 
	 
	return 0;
}
/*
//===============运行结果==================
a
请按任意键继续. . .

*/