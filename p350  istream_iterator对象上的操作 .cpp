//p350  istream_iterator对象上的操作 
#include <iostream>
#include <vector>
#include <iterator> 
#include <algorithm>
#include <numeric>
using namespace std;
int main()
{
	vector<int> vec;
	
	istream_iterator<int> in_iter(cin);
	istream_iterator<int> eof;
	//input
	while (in_iter != eof)
		vec.push_back(*in_iter++);
	//print 
	for (vector<int>::iterator it = vec.begin(); it != vec.end(); it++)
		cout << *it << "\t";
	cout << endl;
		 
	return 0;
}
/*
213
5432
543
654
^Z
213     5432    543     654
请按任意键继续. . .
*/