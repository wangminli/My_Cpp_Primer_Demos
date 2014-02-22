//p275 insert(iter ,word) == push_front 
#include <iostream>
#include <vector>
#include <list>
#include <deque>
using namespace std;
int main()
{
	list<string> lst;
	list<string>::iterator iter = lst.begin();
	string word;
	while (cin >> word)
	{
		iter = lst.insert(iter, word);
	} 
	
	
	for (list<string>::iterator iter = lst.begin(); iter != lst.end(); iter++)
	{
		cout << *iter <<endl;
	} 
			 
	return 0;
}
/*
运行结果 
1
2
3
^z
3
2
1
*/