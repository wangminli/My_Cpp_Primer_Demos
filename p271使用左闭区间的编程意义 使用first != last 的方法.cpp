//p271 ʹ��first != last �ķ���
#include <iostream>
#include <vector>
#include <list>
#include <deque>
using namespace std;
int main()
{
	vector<int> ivec(10, 4);
 	cout << "ʹ��first != last �ķ���" <<endl; 
 	vector<int>::iterator first = ivec.begin();
 	vector<int>::iterator last = ivec.end(); 
	while(first != last)
	{
		cout << *first++ << "\t";	
	}

	return 0;
}
