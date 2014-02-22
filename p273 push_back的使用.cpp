//p273 push_back的使用 
#include <iostream>
#include <vector>
#include <list>
#include <deque>
using namespace std;
int main()
{
	vector<string> container; //其中vector可以更换为 list 或 deque类型 
	string text_word;
	
	while (cin >> text_word)
	{
		container.push_back(text_word); 
	} 
	//读取container的每个字符串 
	cout << "下面读取字符串" <<endl; 
	for (vector<string>::iterator iter = container.begin(); iter != container.end(); iter++)
	{
		cout << *iter <<endl;
	} 
		 
	return 0;
}
/*
wang
min
li
^Z
下面读取字符串
wang
min
li
请按任意键继续. . .
*/