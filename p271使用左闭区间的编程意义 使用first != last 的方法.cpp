//p271 使用first != last 的方法
#include <iostream>
#include <vector>
#include <list>
#include <deque>
using namespace std;
int main()
{
	vector<int> ivec(10, 4);
 	cout << "使用first != last 的方法" <<endl; 
 	vector<int>::iterator first = ivec.begin();
 	vector<int>::iterator last = ivec.end(); 
	while(first != last)
	{
		cout << *first++ << "\t";	
	}

	return 0;
}
