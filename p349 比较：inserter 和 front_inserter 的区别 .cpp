//p349 �Ƚϣ�inserter �� front_inserter ������ 
#include <iostream>
#include <vector>
#include <list> 
#include <iterator>
#include <algorithm>
#include <numeric>
using namespace std;

void print(list<int> &ilist)
{	
	for (list<int>::iterator it = ilist.begin(); it != ilist.end(); it++)
		cout << *it << " ";	
	cout << endl;
} 

int main()
{
	list<int> ilist, ilist2, ilist3;
	for (list<int>::size_type i = 0; i != 4; i++)
		ilist.push_front(i);		//3210
 	print(ilist);
 	
	// front_inserter:Ԫ��ʼ���ڵ�һ��Ԫ��ǰ����� 
	copy(ilist.begin(), ilist.end(), front_inserter(ilist2));// 0123(���ilist����������)	
 	print(ilist2);
 	
 	//inserter:ע������ilist3��begin������һ�����䣨[ilist.begin(), ilist.end())����Ԫ�� 
 	copy(ilist.begin(), ilist.end(), inserter(ilist3, ilist3.begin()));
 	print(ilist3); 
 	
	return 0;
}
/*
3 2 1 0
0 1 2 3
3 2 1 0
�밴���������. . .
*/