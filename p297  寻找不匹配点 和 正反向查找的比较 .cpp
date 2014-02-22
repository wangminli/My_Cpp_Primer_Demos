//p297  寻找不匹配点 和 正反向查找的比较 
#include <iostream>
#include <vector>
#include <list>
#include <deque>
using namespace std;
int main()
{
	string numbers("0123456789");
	string dept("03714p3");
	//寻找不匹配点 
	string::size_type pos = dept.find_first_not_of(numbers);
	cout << pos << endl;
	//正反向查找的比较 
	string river("Mississippi"); 
	string::size_type first_pos = river.find("is");
	string::size_type last_pos = river.rfind("is");
	cout << first_pos << endl;
	cout << last_pos << endl;
	 
	return 0;
}
