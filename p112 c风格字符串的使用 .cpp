//c����ַ�����ʹ�� 
#include<iostream>
using namespace std;
int main()
{
//  char *cp ="some value"; //����Ҳ���ԣ���cp��ı�ָ��ĵ�ַ 
	const  char *cp ="some value";
	while(*cp)
	{
	 	//*cp = 'c';
		cout<<*cp<<endl;
	 	cp++;	
	}	
	
	return 0 ;
}