//p349 比较：inserter 和 front_inserter 的区别 
#include <iostream>
#include <vector>
#include <list> 
#include <iterator>
#include <algorithm>
#include <numeric>
using namespace std;

void print(list<int> &ilist)
{	
	for (list<int>::iterator it = ilist.begin(); it != ilist.end(); it++)
		cout << *it << " ";	
	cout << endl;
} 

int main()
{
	list<int> ilist, ilist2, ilist3;
	for (list<int>::size_type i = 0; i != 4; i++)
		ilist.push_front(i);		//3210
 	print(ilist);
 	
	// front_inserter:元素始终在第一个元素前面插入 
	copy(ilist.begin(), ilist.end(), front_inserter(ilist2));// 0123(相比ilist，倒过来了)	
 	print(ilist2);
 	
 	//inserter:注：是在ilist3的begin处插入一段区间（[ilist.begin(), ilist.end())）的元素 
 	copy(ilist.begin(), ilist.end(), inserter(ilist3, ilist3.begin()));
 	print(ilist3); 
 	
	return 0;
}
/*
3 2 1 0
0 1 2 3
3 2 1 0
请按任意键继续. . .
*/