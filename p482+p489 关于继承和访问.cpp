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

struct Private_derivad: private Base 
{
	int use_base(){return i;}      //“基类的所有成员函数在派生类中位private成员 ” 
} ; 

struct Derived_form_Private : public Private_derivad
{
	//int use_base(){ return i; }  //bug: “派生类不可以访问基类的private成员 ” 
}; 

struct Derived_from_Public : public Public_derived
{
	int use_base(){ return i; } 
}; 
int main()
{
	Base b ; 
	Public_derived d1;
	Private_derivad d2;
//	b = d2; 		//p489 “如果类时使用private 和protected继承派生的，则用户代码不能讲派生类对象转换为基类对象” 
	b.basemen();
	d1.use_base();
	d2.use_base(); 
	return 0;
}


