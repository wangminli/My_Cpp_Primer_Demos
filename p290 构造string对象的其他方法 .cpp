//p290 构造string对象的其他方法 
#include <iostream>
#include <vector>
#include <list>
#include <deque>
using namespace std;
int main()
{
	//string s(47);		//error
	string s1("hell0");
	string s2(5,'a');
	string s3(s2);
	string s4(s3.begin(), s3.begin() + s3.size()/2);
	//验证
	cout << s1 << endl;
	cout << s2 << endl;
	cout << s3 << endl;
	cout << s4 << endl; 		 
	return 0;
}
/*
hell0
aaaaa
aaaaa
aa
请按任意键继续. . .
*/