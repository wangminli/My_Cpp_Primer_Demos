//p339 accumulate把string对象连接 
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;
int main()
{
	vector<string> v;
	for (vector<string>::size_type ix = 0; ix != 10; ix++) 
	{
		v.push_back("abc ");
	}
	 
	string strsum = accumulate(v.begin(), v.end(), string(""));	//其中不能将string("")改为"",""的返回类型是const char* 类型的 
//	string strsum = accumulate(vec.begin(), v.end(), ""/*bug*/);		//编译出错 
	cout << strsum << endl;
		 
	return 0;
}
