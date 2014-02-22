#include <iostream>
#include <vector>
using namespace std;
int main()
{
	string word;
	vector<string> text;
	//为word 添加元素 
	while(cin >> word)  	//点击“ctrl + z”退出 
	{
		text.push_back(word);
	}
	//输出每个vector向量 
	for(vector<int>::size_type ix = 0; ix != word.size(); ++ix)
	{
		cout << text[ix] <<endl;
	}
		 
	return 0;
}
