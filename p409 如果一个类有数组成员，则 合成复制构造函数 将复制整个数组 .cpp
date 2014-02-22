//p409 如果一个类有数组成员，则 合成复制构造函数 将复制整个数组 
#include <iostream>
#include <vector>
#include <iterator> 
#include <algorithm>
#include <numeric>
using namespace std;

class TestArray							 
{
public:

	int a[7] ;							
};

int main()
{
	TestArray ta ;
	ta.a[0] = 0;
	ta.a[1] = 1;
	ta.a[2] = 2; 
	TestArray ta2 = ta;					//这时即使没写复制构造函数依然成立，但类成员有 指针类型 时不可以这样写 
	for (int i = 0; i < 7; i++)			//print 
		cout << "ta2.a[" << i << "] == "<<ta2.a[i] << endl;
	 
	return 0;
}
/*
//===============运行结果==================
ta2.a[0] == 0
ta2.a[1] == 1
ta2.a[2] == 2
ta2.a[3] == 2009091625
ta2.a[4] == 2009091650
ta2.a[5] == 4246676
ta2.a[6] == 2293624
请按任意键继续. . .
*/