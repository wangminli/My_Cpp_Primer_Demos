//p285 size��capacity��reserve�ıȽ� 
#include <iostream>
#include <vector>
#include <list>
#include <deque>
using namespace std;
int main()
{
	vector<int> ivec;
	cout << "û�з���ռ�ʱ,���Ǹ��Ե�ֵ�ǣ�" << endl; 
	cout << "ivec.size() = " << ivec.size() <<endl;
	cout << "ivec.capacity() =" << ivec.capacity() <<endl;
 	//��ֵ
 	for(vector<int>::size_type i = 0; i != 24; i++)
 		ivec.push_back(i);
	//��֤ 
	cout << "����ռ�֮�����Ǹ��Ե�ֵ�ǣ�"  <<endl; 
 	cout << "ivec.size() = " << ivec.size() <<endl;
	cout << "ivec.capacity() =" << ivec.capacity() <<endl;	
	//��ֵ 
	ivec.resize(50);
	//��֤
	cout << "ivec.resize(50)��" <<endl; 
	cout << "ivec.size() = " << ivec.size() <<endl;
	cout << "ivec.capacity() =" << ivec.capacity() <<endl;	
	//��ֵ 
	while(ivec.size() != ivec.capacity()) 
		ivec.push_back(0);
	//��֤
	cout << "ivec.size() == ivec.capacity()ʱ��" <<endl;
 	cout << "ivec.size() = " << ivec.size() <<endl;
	cout << "ivec.capacity() =" << ivec.capacity() <<endl;	
	//��ֵ
	ivec.push_back(47);
	cout << "ivec.push_back(47)��" <<endl;
 	cout << "ivec.size() = " << ivec.size() <<endl;
	cout << "ivec.capacity() =" << ivec.capacity() <<endl;
	return 0;
}
/*
û�з���ռ�ʱ,���Ǹ��Ե�ֵ�ǣ�
ivec.size() = 0
ivec.capacity() =0
����ռ�֮�����Ǹ��Ե�ֵ�ǣ�
ivec.size() = 24
ivec.capacity() =32
ivec.resize(50)��
ivec.size() = 50	������������������������������������ 
ivec.capacity() =50
ivec.size() == ivec.capacity()ʱ��
ivec.size() = 50
ivec.capacity() =50
ivec.push_back(47)��
ivec.size() = 51
ivec.capacity() =100
�밴���������. . .
*/