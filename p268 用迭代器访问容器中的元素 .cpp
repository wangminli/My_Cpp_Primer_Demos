//p268 用迭代器访问容器中的元素 和比较 
#include <iostream>
#include <vector>
#include <list>
#include <deque>
using namespace std;
int main()
{
	vector<int> ivec(10, 4);
 	cout << "迭代器访问ivec的所有元素" <<endl; 
	for(vector<int>::iterator iter = ivec.begin(); iter != ivec.end(); iter++)
		cout << *iter << "\t";	
		
	cout << "迭代器访问ivec的一半元素" <<endl; 
	for(vector<int>::iterator iter = ivec.begin(); iter != ivec.begin()+ivec.size()/2; iter++)
		cout << *iter << "\t";	
		 
	cout << "\n用C方法访问ivec的所有元素" <<endl; 
	for(int i = 0; i < 10; i++)
		cout << ivec[i] << "\t";
		
	cout << "使用first != last 的方法" <<endl; 
 	vector<int>::iterator first = ivec.begin();
 	vector<int>::iterator last = ivec.end(); 
	while(first != last)
		cout << *first++ << "\t";		
		
//	while(ivec.begin() != ivec.end())//死循环了 
//	{
//		cout << *(ivec.begin()++) ;
//	}
	return 0;
}
