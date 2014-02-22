//p480 证明：“非虚函数，都执行基类所定义的函数 ” 
#include<iostream>
using namespace std;

class Base 
{
public:
	void print()
	{
		cout << "执行基类的非虚函数" << endl; 
	} 
}; 

class Derived:public Base
{
public:
	void print()
	{
		cout << "执行派生类的非虚函数" << endl; 
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
/*==========运行结果============
执行基类的非虚函数
执行派生类的非虚函数
请按任意键继续. . .
*/