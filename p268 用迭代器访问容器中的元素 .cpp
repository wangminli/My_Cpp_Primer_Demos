//p268 �õ��������������е�Ԫ�� �ͱȽ� 
#include <iostream>
#include <vector>
#include <list>
#include <deque>
using namespace std;
int main()
{
	vector<int> ivec(10, 4);
 	cout << "����������ivec������Ԫ��" <<endl; 
	for(vector<int>::iterator iter = ivec.begin(); iter != ivec.end(); iter++)
		cout << *iter << "\t";	
		
	cout << "����������ivec��һ��Ԫ��" <<endl; 
	for(vector<int>::iterator iter = ivec.begin(); iter != ivec.begin()+ivec.size()/2; iter++)
		cout << *iter << "\t";	
		 
	cout << "\n��C��������ivec������Ԫ��" <<endl; 
	for(int i = 0; i < 10; i++)
		cout << ivec[i] << "\t";
		
	cout << "ʹ��first != last �ķ���" <<endl; 
 	vector<int>::iterator first = ivec.begin();
 	vector<int>::iterator last = ivec.end(); 
	while(first != last)
		cout << *first++ << "\t";		
		
//	while(ivec.begin() != ivec.end())//��ѭ���� 
//	{
//		cout << *(ivec.begin()++) ;
//	}
	return 0;
}
