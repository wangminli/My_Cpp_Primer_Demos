//
#include<iostream>
using namespace std;

class A
{
public:
	A(int i_, int j_)
	{
		i = i_;
		j = j_; 
	} 
	void disp(A &a) 
	{
		cout << a.i << ", "<< a.j << endl; 
	} 
private:
	int i;
protected:
	int j; 
} ; 


int main()
{
	A a(123, 456);
	A b(789, 543);
	a.disp(b);
	b.disp(a); 
	return 0;
}
/*
789, 543
123, 456
请按任意键继续. . .
*/ 