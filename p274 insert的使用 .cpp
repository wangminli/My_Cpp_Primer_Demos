//p274 insert��ʹ�� 
#include <iostream>
#include <vector>
#include <list>
#include <deque>
using namespace std;
int main()
{
	vector<string> svec;
	list<string> slist;
	string spouse("Beth");
	
	svec.insert(svec.begin(), spouse);
	slist.insert(slist.begin(), spouse);
	//��֤��	
	cout << "svec:" <<"\t"; 
	for (vector<string>::iterator iter = svec.begin(); iter != svec.end(); iter++)
	{
		cout << *iter <<endl;
	} 
	cout << "slist:" <<"\t"; 
	for (list<string>::iterator iter = slist.begin(); iter != slist.end(); iter++)
	{
		cout << *iter <<endl;
	} 
			 
	return 0;
}
