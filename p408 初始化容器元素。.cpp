//p408 初始化容器元素。 
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
	
	Cls(const Cls& cls)					 
	{
		cout << "复制构造函数" << endl;
	}

};

int main()
{
	vector<Cls> cVec(5);
			 
	return 0;
}
/*
//===============run:与理论不符===============
构造函数
复制构造函数
复制构造函数
复制构造函数
复制构造函数
复制构造函数
请按任意键继续. . .
*/
