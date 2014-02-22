//C++构造函数的隐式转换和避免 
#include <iostream>
#include <vector>
#include <iterator> 
#include <algorithm>
#include <numeric>
using namespace std;

class Test1
{
	public:
	Test1(int n)
	{
		int num = n;
	}
	
	private:
	int num;
};

class Test2
{
	public:
	explicit  Test2(int n)		// //explicit(显式)构造函数
	{
		num = n;
	}
	
	private:
	int num;
};


int main()
{
	Test1 t1 = Test1(47);
	Test1 t2 =47;
	Test2 t3 = Test2(47);
//	Test2 t4 = 47;				//explicit声明的只能显式声明了 
	
	cout << t1 << endl;
	cout << t2 << endl;
	cout << t3 << endl;
		 
	return 0;
}
/*
//===============运行结果==================

*/