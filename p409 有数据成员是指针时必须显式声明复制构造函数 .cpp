//p409 有数据成员是指针时必须显式声明复制构造函数 
#include <iostream>
#include <vector>
#include <iterator> 
#include <algorithm>
#include <numeric>
using namespace std;

class Cls
{
public:
	Cls()
	{
		cout << "构造函数" << endl;
	}
	

	
private:
	int *p;
};

int main()
{
	Cls class1;
	Cls class2 = class1;
			 
	return 0;
}
/*
//===============run:与理论不符===============

*/
