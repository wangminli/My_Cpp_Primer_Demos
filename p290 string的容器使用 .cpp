//p290 string������ʹ�� 
#include <iostream>
#include <vector>
#include <list>
#include <deque>
using namespace std;
int main()
{
	string a();
	string s("Hiya");
	string::iterator iter = s.begin();
	while(iter != s.end())
		cout << *iter++ <<endl;
	 
		 
	return 0;
}
/*
H
i
y
a
�밴���������. . .
*/ 