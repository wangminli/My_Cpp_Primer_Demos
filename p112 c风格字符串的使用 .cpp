//c风格字符串的使用 
#include<iostream>
using namespace std;
int main()
{
//  char *cp ="some value"; //这样也可以，但cp会改变指向的地址 
	const  char *cp ="some value";
	while(*cp)
	{
	 	//*cp = 'c';
		cout<<*cp<<endl;
	 	cp++;	
	}	
	
	return 0 ;
}