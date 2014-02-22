//p449 调用操作符 
#include <iostream>
#include <vector>
#include <iterator> 
#include <algorithm>
#include <numeric>
using namespace std;

struct absInt
{
	int operator()(int val)
	{
		return val < 0 ?-val:val;
	}	
} ;

int main()
{
	int i =-42;
	absInt absObj;
	int ui = absObj(i);
	cout << ui << endl;
		 
	return 0;
}
/*
//===============运行结果==================
42
请按任意键继续. . .

*/