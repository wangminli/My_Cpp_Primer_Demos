//��ϰʹ�ã�����Ϊ��ָ��const�����ָ��  �� constָ�� 
#include<iostream>
using namespace std;
int main()
{
	//������Ϊ��ָ��const�����ָ��
	const double pi = 3.14;
	//double *ptr = &pi;  	//����ֻ�ܸ���ָ��const�����ָ�� 
	const double *cptr = &pi; 
	cout<<*cptr <<endl;
	//������ѷ�const����ĵ�ַ��ֵ��ָ��const�����ָ�� ��
	double dval = 3.14;
	cptr = &dval; 
	cout<<*cptr<<endl;
	//��cptrָ��ĵ�ַ���Ըı�
	double var = 47.0;
	cptr = &var;
	cout<<*cptr <<endl;
	 
	//������ͨ��cptr�޸�dval��ֵ ��������ͨ������;��Ϊdval��ֵ 
	// *cptr = 0.618��
	dval = 0.618; 
	cout<<dval<<endl;
	
	
	//============================= 
	//constָ��
	int a = 7 ;
	int *const cp = &a;
	cout<<*cp<<endl;
 	int b = 11;			
// 	cp = &b; 	//bugs,cp�����ٴθ�ֵ 

//===============================
	//ָ��const�����constָ��
	double e = 0.618;
	const double *const e_ptr = &e;
	cout<<*e_ptr<<endl;
	//���������
// 	*e_ptr = 6.18;  //��ֵ�������޸� 
//	e_ptr = &a;		//ָ�벻�ɸ��� 
	
	return 0 ;
}