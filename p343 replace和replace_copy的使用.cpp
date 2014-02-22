//p343 replace和replace_copy的使用 
#include <iostream>
#include <vector>
#include <list> 
#include <algorithm>
#include <numeric>
using namespace std;
int main()
{
	list<int> ilist;
	for (list<int>::size_type ix = 0 ; ix != 20; ix++)
		ilist.push_back(ix % 3);	//为了出现更多的0 
		
	replace(ilist.begin(), ilist.end(), 0, 7 );

	for (list<int>::iterator iter = ilist.begin(); iter != ilist.end(); ++iter) 
		cout << *iter << "  ";
	cout << endl;
	
//	for (list<int>::size_type ix = 0 ; ix != 20; ix++)	
//		 cout << ilist[ix] << endl;			//error,不可以对list类型进行下标操作

	//replace_copy
	vector<int> vec1;
	replace_copy(ilist.begin(), ilist.end(), back_inserter(vec1), 7, 0);
	for (vector<int>::iterator iter = vec1.begin(); iter != vec1.end(); iter++) 
		cout << *iter << "  ";
	cout << endl;
	
	return 0;
}
/*
7  1  2  7  1  2  7  1  2  7  1  2  7  1  2  7  1  2  7  1
0  1  2  0  1  2  0  1  2  0  1  2  0  1  2  0  1  2  0  1
请按任意键继续. . .
*/