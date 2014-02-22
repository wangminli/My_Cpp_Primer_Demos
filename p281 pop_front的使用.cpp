//p281 pop_front的使用 
#include <iostream>
#include <vector>
#include <list>
#include <iterator> 
#include <algorithm>
#include <numeric>
using namespace std;

void print(list<int> ilist)
{
	for (list<int>::iterator iter = ilist.begin(); iter != ilist.end(); iter++)
		cout << *iter << "\t";
	cout << endl;
}
int main()
{
	list<int> ilist ;
	for (list<int>::size_type ix = 0; ix != 10; ix++)
		ilist.push_back(ix);

	//erase 
	while (!ilist.empty())
	{
		print(ilist);
		ilist.pop_front();
		
	} 
			 
	return 0;
}
/*
0       1       2       3       4       5       6       7       8       9

1       2       3       4       5       6       7       8       9
2       3       4       5       6       7       8       9
3       4       5       6       7       8       9
4       5       6       7       8       9
5       6       7       8       9
6       7       8       9
7       8       9
8       9
9
请按任意键继续. . .
*/