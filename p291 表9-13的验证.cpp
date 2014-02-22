//p291 表9-13的验证 
#include <iostream>
#include <vector>
#include <list>
#include <deque>
using namespace std;
int main()
{
	char *cp = "123456";
	string s1(cp,6);
	string s2(s1, 3);
	string s3(s1, 2, 3);
	string s4(s1, 2, 7);	//len超出范围,所以复制s1.size()-s.pos个字符 
	//验证
	cout << *cp <<endl;
	cout << s1 <<endl;
	cout << s2 <<endl;
	cout << s3 <<endl;
	cout << s4 <<endl;	 
	return 0;
}
/*
1
123456
456
345
3456
请按任意键继续. . .
*/