//p96 ����ά�� + p118��̬��������ʱά����ȷ��
#include<iostream>
using namespace std;
int main()
{

	//p96,"��const�����Լ�Ҫ�����н׶β�֪����ֵ��const�������������ڶ��������ά��"
	//����ĳ�����Щ��������ͨ������C-Free����VC�ᱨ��
	int m = 10 ;
//	int a[m] ;

	int j = 10;
	int *p = new int[j];  //��̬��������ʱ������ʹ�ñ���ȷ��Ҫ����ĸ���
	int *p1 = p ; //��ֱ��ʹ��p��Ŀ���Ƿ�ֹp���ߺ��ٷ���ԭ����ֵ���鷳��
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
