//p354 �����������ʹ��1 
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
		
 	//������� 
 	cout << "���������" << endl; 
	for (vector<int>::iterator iter = vec.begin(); iter != vec.end(); iter++)
		cout << *iter << " " ;
	cout << endl;
	//������� 
	cout << "�������" <<endl; 
	for (vector<int>::reverse_iterator iter = vec.rbegin(); iter != vec.rend(); iter++)
    	cout << *iter << " "; //
	cout << endl;
 
 //	sort(vec.begin(), vec.end());
	sort(vec.rbegin(), vec.rend());		//�������� 
	cout << "��������������"<< endl;
	for (vector<int>::iterator iter = vec.begin(); iter != vec.end(); iter++)
	cout << *iter << " " ;
	cout << endl;

 	
	return 0;
}
/*
���������
0 1 2 3 4 5 6 7 8 9
�������
9 8 7 6 5 4 3 2 1 0
��������������
9 8 7 6 5 4 3 2 1 0
�밴���������. . .
*/