//p314 重写单词的统计程序 
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
 		if (!ret.second)//如果没插上 
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