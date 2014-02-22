//
#include<iostream>
using namespace std;

class Base 
{
	int i; 
	 
}; 

class  Derived: protected Base
{
	int j; 
}; 
int main()
{	
	Base b;
	Derived d;
	b = d; 
	
	
	return 0;
}
/*==========运行结果============

*/