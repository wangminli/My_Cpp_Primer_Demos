//p351 ostream_iterator��istream_iterator������ʹ�� 
#include <iostream>
#include <vector>
#include <iterator> 
#include <algorithm>
#include <numeric>
using namespace std;
int main()
{
	ostream_iterator<string> out_iter(cout, "\n");
	
	cout << "���룺" << endl;
	istream_iterator<string> in_iter(cin), eof;
	
	cout << "�����" << endl; 
	while (in_iter != eof)
		*out_iter++ = *in_iter++;	
		 
	return 0;
}
/*
���룺
794564131
�����
^Z��Ŀ�����������˳�ѭ���� 
794564131
�밴���������. . .
*/
