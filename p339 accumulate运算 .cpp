//p339 accumulate运算 
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;
int main()
{
	vector<int> vec;
	for (vector<int>::size_type ix = 0; ix != 10; ix++) //其内的总和为45.（1+2+3+……+9） 
	{
		vec.push_back(ix);
	}
	 
	double sum = accumulate(vec.begin(), vec.end(), 42);
	cout << sum << endl;
	//验证：“其返回结果类型就是其第三个实参的类型（42.8）”	
	cout << accumulate(vec.begin(), vec.end(), 42.8) << endl;
		 
	return 0;
}
/*
87
87.8
请按任意键继续. . .
*/ 

 