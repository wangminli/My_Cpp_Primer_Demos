//p452 表示操作类型的模板类型 
#include <iostream>
#include <vector>
#include <functional>
#include <iterator> 
#include <algorithm>
#include <numeric>
using namespace std;
int main()
{
	plus<int> intAdd;
	negate<int> intNeate;
	int sum = intAdd(10, 47);
	int sum2 = intAdd(10, intNeate(47));
	cout << sum << endl;
	cout << sum2 << endl;
			 
	return 0;
}
/*
//===============运行结果==================
57
-37
请按任意键继续. . .

*/