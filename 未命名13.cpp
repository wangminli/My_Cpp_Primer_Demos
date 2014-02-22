//
#include <iostream>
#include <vector>
#include <iterator> 
#include <algorithm>
#include <numeric>
using namespace std;
int main()
{
	string line(" C++ Primer Test , of wangminli!");
	string::iterator comma = find(line.begin(), line.end(), ',');
	cout << string(line.begin(), comma) << endl;	
	
 	string::reverse_iterator rcomma = find(line.rbegin(), line.rend(), ',');
 	cout << string(line.rbegin(), rcomma) << endl;  	
 	cout << string(comma+1, line.end()) << endl; 	//note：加1的原因！ 
//	cout << string(rcomma.base(), line.rbegin()) << endl; 	//
  	cout << string(rcomma.base(), line.end()) << endl;		//rcomma.base()实现正向输出 
//	cout << string(rcomma, line.rbegin());	//	bugs

	return 0;
}
