//p316 map对象的迭代遍历 
#include <iostream>
#include <utility>
#include <map>
using namespace std;
int main()
{
	//10.3.4节内容 
	map<string, int> word_count;
	string word;
	while (cin >> word)
	{
		cout << (++word_count[word]) << endl;
	} 
	 
	//map迭代遍历 
	map<string, int>::const_iterator map_it = word_count.begin();
	while (map_it != word_count.end())
	{
		cout << map_it->first << " occurs," 
			 << map_it->second << " times" << endl;
		++map_it; 
	} 
 	
	return 0;
}
/*
wang
1
wang
2
wang
3
li
1
li
2
zhang
1
zhang
2
zhang
3
zhang
4
^Z
li occurs,2 times
wang occurs,3 times
zhang occurs,4 times
请按任意键继续. . .
*/