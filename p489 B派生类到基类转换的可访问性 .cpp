//p489 B�����ൽ����ת���Ŀɷ����� 
#include<iostream>
using namespace std;

class Base
{
public:
	void basemen(){};
protected:
	int i ;

} ;

struct Public_derived :public Base 
{
	int use_base(){return i;} 
	
} ; 

struct Protected_derivad: protected Base 
{
	int use_base(){return i;}      
} ; 

struct Private_derived : private Base
{
	int use_base(){return i;} 
}; 

struct Derived_from_Private : public Private_derived
{
}; 

struct Derived_from_Protected : public  Protected_derivad
{}; 
int main()
{
	Base b;
	Derived_from_Private dfp1;
//	b = dfp1; 
	Derived_from_Protected dfp2;
	b = dfp2; 		//ΪʲôҲ������ת�� �� 
	return 0;
}


