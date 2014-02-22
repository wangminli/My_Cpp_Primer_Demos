//p351 ostream_iterator和istream_iterator的配套使用 
#include <iostream>
#include <vector>
#include <iterator> 
#include <algorithm>
#include <numeric>
using namespace std;
int main()
{
	ostream_iterator<string> out_iter(cout, "\n");
	
	cout << "输入：" << endl;
	istream_iterator<string> in_iter(cin), eof;
	
	cout << "输出：" << endl; 
	while (in_iter != eof)
		*out_iter++ = *in_iter++;	
		 
	return 0;
}
/*
输入：
794564131
输出：
^Z（目的在于让其退出循环） 
794564131
请按任意键继续. . .
*/
