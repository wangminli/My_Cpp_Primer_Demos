//p320 set��vector�ıȽϣ�set�洢�ļ�����Ψһ 
#include <iostream>
#include <utility>
#include <map>
#include <vector>
#include <set> 
using namespace std;
int main()
{
	vector<int> ivec;
	for (vector<int>::size_type i = 0; i != 10; i++)
	{
		ivec.push_back(i);
		ivec.push_back(i);//������ͬ 
	}
	
	set<int> iset(ivec.begin(),ivec.end());//iset�ĳ�ʼ��
	cout << ivec.size() << endl;
	cout << iset.size() << endl; 
 
 	
	return 0;
}
/*
20
10
�밴���������. . .
*/