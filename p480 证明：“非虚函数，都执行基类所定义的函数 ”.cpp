//p480 ֤���������麯������ִ�л���������ĺ��� �� 
#include<iostream>
using namespace std;

class Base 
{
public:
	void print()
	{
		cout << "ִ�л���ķ��麯��" << endl; 
	} 
}; 

class Derived:public Base
{
public:
	void print()
	{
		cout << "ִ��������ķ��麯��" << endl; 
	} 
}; 

int main()
{
	Base b; 
	Derived  d;
	b = d;
	b.print(); 
 	d.print(); 
	
	return 0;
}
/*==========���н��============
ִ�л���ķ��麯��
ִ��������ķ��麯��
�밴���������. . .
*/