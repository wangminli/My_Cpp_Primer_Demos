//
#include<iostream>
using namespace std;

class Base 
{
protected:
	int i; 
}; 

class Derived: public Base
{
	 public:
	 void function()
	 {
	 	i = 3; 
	 } 
}; 
int main()
{
	Base b;
	Derived d;
	//d.i= 3; 
	
	return 0;
}
/*==========运行结果============

*/