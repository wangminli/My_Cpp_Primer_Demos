//p408 ��ʼ������Ԫ�ء� 
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
	
	Cls(const Cls& cls)					 
	{
		cout << "���ƹ��캯��" << endl;
	}

};

int main()
{
	vector<Cls> cVec(5);
			 
	return 0;
}
/*
//===============run:�����۲���===============
���캯��
���ƹ��캯��
���ƹ��캯��
���ƹ��캯��
���ƹ��캯��
���ƹ��캯��
�밴���������. . .
*/
