//p96 数组维数 + p118动态分配数组时维数的确定
#include<iostream>
using namespace std;
int main()
{

	//p96,"非const变量以及要到运行阶段才知道其值的const变量都不能用于定义数组的维数"
	//下面的程序，有些编译器会通过，如C-Free，但VC会报错
	int m = 10 ;
//	int a[m] ;

	int j = 10;
	int *p = new int[j];  //动态分配数组时，可以使用变量确定要分配的个数
	int *p1 = p ; //不直接使用p的目的是防止p移走后再访问原来的值就麻烦了
	for(int i = 0; i < 10; i++)
	{
 			*p1 = i ; 
			p1++;
	}
	for(int i = 0; i < 10; i++)
	{
			printf("%d\n",*p);
			p++;
	}
	return  0 ;
}
