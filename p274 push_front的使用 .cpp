//p274 push_frontµÄÊ¹ÓÃ 
#include <iostream>
#include <vector>
#include <list>
#include <deque>
using namespace std;
int main()
{
	list<int> ilist;
	for (size_t ix = 0; ix != 7; ix++)
	{
		ilist.push_back(ix);
	}
	
	for (size_t ix = 0; ix != 4; ix++)
	{
		ilist.push_front(ix);
	}
	
	for (list<int>::iterator iter = ilist.begin(); iter != ilist.end(); iter++)
	{
		cout << *iter <<endl;
	}
		 
	return 0;
}
