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
���н�� 
wang
min
li
^Z
li
min
wang
�밴���������. . .
*/