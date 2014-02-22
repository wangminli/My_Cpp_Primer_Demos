//p342 back_inserterµÄÊ¹ÓÃ 
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;
int main()
{
	vector<int> vec;
	fill_n(back_inserter(vec), 10 ,7);
 	
 	for (vector<int>::size_type ix = 0; ix != 10; ix++)
	 	cout << vec[ix] << endl; 
	return 0;
}
