//p409 Q:�����ݳ�Ա��ָ��ʱ������ʽ�������ƹ��캯�� 
#include <iostream>
#include <vector>
#include <iterator> 
#include <algorithm>
#include <numeric>
using namespace std;

class Cls
{
public:
	Cls()
	{
		cout << "���캯��" << endl;
	}
	


	
private:
	int *p;		//��ָ���Ա����û�и��ƹ��캯��ʱ��Ȼ����ͨ�� 
};

int main()
{
	Cls class1;
	Cls class2 = class1;
			 
	return 0;
}
/*
//===============run:�����۲���===============

*/
