//p278 容器的大小操作 
#include <iostream>
#include <vector>
#include <list>
#include <deque>
using namespace std;
int main()
{
	list<int> ilist(10, 42);
	ilist.resize(15);
	ilist.resize(25,-1);
	cout << "ilist.empty()？:" << ilist.empty() << endl;
	cout << "ilist.size(): " << ilist.size() <<endl;
	cout << "ilist.max_size(): " <<ilist.max_size() <<endl; //max_size() 函数返回当前vector所能容纳元素数量的最大值(译注:包括可重新分配内存). 
		
	//输出 
	for(list<int>::iterator iter = ilist.begin(); iter != ilist.end(); iter++)
	{
		cout << *iter <<"\t";
	}
	cout << endl;	
		 
	return 0;
}
/*
ilist.empty()？:0
ilist.size(): 25
ilist.max_size(): 4294967295
42      42      42      42      42      42      42      42      42      42
0       0       0       0       0       -1      -1      -1      -1      -1
-1      -1      -1      -1      -1
请按任意键继续. . .

*/