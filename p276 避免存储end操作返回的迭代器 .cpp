//p276 ??:避免存储end操作返回的迭代器 
#include <iostream>
#include <vector>
#include <list>
#include <deque>
using namespace std;

int main()
{
	
	vector<int> v;
	for(int i=0;i<5;++i)
	    v.push_back(i);
	    
	vector<int>::iterator first = v.begin();
	vector<int>::iterator last = v.end();
//	int i = 0;
	//while(first != v.end() )//?:死循环了 
	while (first != last)
	{
	    first = v.insert(first,42) +1 ;
	    cout << *first <<endl;
	    ++first;
	   // i++;
	}
	//输出 
//		for (vector<int>::iterator iter = v.begin(); iter != v.end(); iter++)
//		{
//			cout << *iter <<endl;
//	} 
			 
		return 0;
}
/*
0
1
2
3
4
1127963847
请按任意键继续. . .
*/