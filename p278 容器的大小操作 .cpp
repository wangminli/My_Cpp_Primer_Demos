//p278 �����Ĵ�С���� 
#include <iostream>
#include <vector>
#include <list>
#include <deque>
using namespace std;
int main()
{
	list<int> ilist(10, 42);
	ilist.resize(15);
	ilist.resize(25,-1);
	cout << "ilist.empty()��:" << ilist.empty() << endl;
	cout << "ilist.size(): " << ilist.size() <<endl;
	cout << "ilist.max_size(): " <<ilist.max_size() <<endl; //max_size() �������ص�ǰvector��������Ԫ�����������ֵ(��ע:���������·����ڴ�). 
		
	//��� 
	for(list<int>::iterator iter = ilist.begin(); iter != ilist.end(); iter++)
	{
		cout << *iter <<"\t";
	}
	cout << endl;	
		 
	return 0;
}
/*
ilist.empty()��:0
ilist.size(): 25
ilist.max_size(): 4294967295
42      42      42      42      42      42      42      42      42      42
0       0       0       0       0       -1      -1      -1      -1      -1
-1      -1      -1      -1      -1
�밴���������. . .

*/