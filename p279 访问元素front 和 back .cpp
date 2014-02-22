//p279 ����Ԫ��front �� back 
#include <iostream>
#include <vector>
#include <list>
#include <deque>
using namespace std;
void print(list<int> &ilist)
{
	for (list<int>::iterator iter = ilist.begin(); iter != ilist.end(); iter++)
		cout << *iter << "\t";
	cout << endl;
}
int main()
{
	list<int> ilist(10, 42);
	//��ֵ
	for (int i = 0; i < 5; i++)
	{
		ilist.push_back(i);//
	} 
	print(ilist);
	//����
	list<int>::reference first = *ilist.begin();
	list<int>::reference first2 = ilist.front();
	
	list<int>::reference  last = *--ilist.end(); //������һ��*ilist.end(); 
	list<int>::reference last2 = ilist.back();
	
	//���
	
	cout << "first =" << first <<endl;
 	cout << "first2 = " << first2 <<endl;
 	cout << "last = " << last <<endl;
 	cout << "last2 = " <<last2 << endl;
		 
	return 0;
}
/*
42      42      42      42      42      42      42      42      42      42
0       1       2       3       4
first =42
first2 = 42
last = 4
last2 = 4
�밴���������. . .
*/