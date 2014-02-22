//p313 insert的使用 
#include <iostream>
#include <utility>
#include <vector>
#include <map>
using namespace std;
int main()
{
	map<string, int > word_count;
	word_count.insert(map<string, int>::value_type("Anna",47));
	map<string, int >::iterator map_it = word_count.begin();
	cout << map_it->first <<endl;
	cout << map_it->second << endl;
	//make_pair
	word_count.insert(make_pair("Bruce",32));
	cout << word_count["Bruce"] << endl;
	//typedef
	typedef map<string, int>::value_type valType;
	word_count.insert(valType("CeShi", 23));
	cout << word_count["CeShi"]<<endl;
	//再插入相同键时，它的值并没有改变 
	word_count.insert(valType("CeShi", 89));
	cout << word_count["CeShi"] <<endl;

	return 0;
}
/*
Anna
47
32
23
23
请按任意键继续. . .
*/