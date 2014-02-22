//p354 反向迭代器的使用1 
#include <iostream>
#include <vector>
#include <iterator> 
#include <algorithm>
#include <numeric>
using namespace std;
int main()
{
	vector<int> vec;
	//input 
	for (vector<int>::size_type i = 0; i != 10; i++)
		vec.push_back(i);
		
 	//正向输出 
 	cout << "正向输出：" << endl; 
	for (vector<int>::iterator iter = vec.begin(); iter != vec.end(); iter++)
		cout << *iter << " " ;
	cout << endl;
	//反向输出 
	cout << "反向输出" <<endl; 
	for (vector<int>::reverse_iterator iter = vec.rbegin(); iter != vec.rend(); iter++)
    	cout << *iter << " "; //
	cout << endl;
 
 //	sort(vec.begin(), vec.end());
	sort(vec.rbegin(), vec.rend());		//反向排序 
	cout << "排序后正向输出："<< endl;
	for (vector<int>::iterator iter = vec.begin(); iter != vec.end(); iter++)
	cout << *iter << " " ;
	cout << endl;

 	
	return 0;
}
/*
正向输出：
0 1 2 3 4 5 6 7 8 9
反向输出
9 8 7 6 5 4 3 2 1 0
排序后正向输出：
9 8 7 6 5 4 3 2 1 0
请按任意键继续. . .
*/