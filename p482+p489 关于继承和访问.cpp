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
	int use_base(){return i;}      //����������г�Ա��������������λprivate��Ա �� 
} ; 

struct Derived_form_Private : public Private_derivad
{
	//int use_base(){ return i; }  //bug: �������಻���Է��ʻ����private��Ա �� 
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
//	b = d2; 		//p489 �������ʱʹ��private ��protected�̳������ģ����û����벻�ܽ����������ת��Ϊ������� 
	b.basemen();
	d1.use_base();
	d2.use_base(); 
	return 0;
}


