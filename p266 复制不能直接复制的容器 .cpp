//p266 复制不能直接复制的容器 
#include <vector>
#include <list>
#include <deque>
#include <iostream>
using namespace std;

void input(vector<string>  &svec)
{
	for (vector<string>::size_type ix = 0; ix != 10; ix++)	
		svec.push_back("abc ");
} 
void print(list<string> &slist)
{
	for (list<string>::iterator iter = slist.begin(); iter != slist.end(); iter++)
		cout << *iter << "\t";
	cout << endl;
}
void print(deque<string> &slist)
{
	for (deque<string>::iterator iter = slist.begin(); iter != slist.end(); iter++)
		cout << *iter << "\t";
	cout << endl;
}


int main()
{
	vector<string> svec;
	input(svec);
	
 	list<string> slist(svec.begin(),svec.end());
 	print(slist);
 		
 	vector<string>::iterator mid = svec.begin() + svec.size()/2;
 	deque<string> front(svec.begin() , mid); 
 	print(front);
 	
 	deque<string> back(mid, svec.end());
 	print(back);
		 
	return 0;
}
