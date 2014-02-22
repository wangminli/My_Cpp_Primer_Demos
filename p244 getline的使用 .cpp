//p244 getline的使用 
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;
int main()
{
	string str;
	getline(cin, str);	//从istream对象读取一个单词，然后写入string对象中 
	cout << str << endl;		 
	return 0;
}
