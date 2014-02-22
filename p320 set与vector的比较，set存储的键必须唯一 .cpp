//p320 set与vector的比较，set存储的键必须唯一 
#include <iostream>
#include <utility>
#include <map>
#include <vector>
#include <set> 
using namespace std;
int main()
{
	vector<int> ivec;
	for (vector<int>::size_type i = 0; i != 10; i++)
	{
		ivec.push_back(i);
		ivec.push_back(i);//与上相同 
	}
	
	set<int> iset(ivec.begin(),ivec.end());//iset的初始化
	cout << ivec.size() << endl;
	cout << iset.size() << endl; 
 
 	
	return 0;
}
/*
20
10
请按任意键继续. . .
*/