//练习使用（自以为）指向const对象的指针  和 const指针 
#include<iostream>
using namespace std;
int main()
{
	//（自以为）指向const对象的指针
	const double pi = 3.14;
	//double *ptr = &pi;  	//常量只能赋给指向const对象的指针 
	const double *cptr = &pi; 
	cout<<*cptr <<endl;
	//“允许把非const对象的地址赋值给指向const对象的指针 ”
	double dval = 3.14;
	cptr = &dval; 
	cout<<*cptr<<endl;
	//但cptr指向的地址可以改变
	double var = 47.0;
	cptr = &var;
	cout<<*cptr <<endl;
	 
	//不可以通过cptr修改dval的值 ，但可以通过其他途径为dval赋值 
	// *cptr = 0.618；
	dval = 0.618; 
	cout<<dval<<endl;
	
	
	//============================= 
	//const指针
	int a = 7 ;
	int *const cp = &a;
	cout<<*cp<<endl;
 	int b = 11;			
// 	cp = &b; 	//bugs,cp不可再次赋值 

//===============================
	//指向const对象的const指针
	double e = 0.618;
	const double *const e_ptr = &e;
	cout<<*e_ptr<<endl;
	//下面均错误：
// 	*e_ptr = 6.18;  //其值不可以修改 
//	e_ptr = &a;		//指针不可更改 
	
	return 0 ;
}