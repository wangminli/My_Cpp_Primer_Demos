//p314 ��д���ʵ�ͳ�Ƴ��� 
#include <iostream>
#include <utility>
#include <map>
using namespace std;
int main()
{
 	map<std::string, int> word_count;
	string word;
	 while (cin >> word)
 	{
 		pair<map<string, int>::iterator, bool> ret = word_count.insert(make_pair(word, 1));
 		if (!ret.second)//���û���� 
 			cout <<	++ret.first->second << endl;
	 } 
}
/*
zhangsan
zhangsan
2
lisi-
lisi
2
lisi
3

*/