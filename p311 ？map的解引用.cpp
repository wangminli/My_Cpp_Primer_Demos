//p311 ？map的解引用 
#include <iostream>
#include <vector>
#include <list>
#include <utility> 
#include <map>
#include <deque>
using namespace std;
int main()
{
	map<string, int> word_count;
	map<string, int>::iterator map_it = word_count.begin();
//	cout << map_it->first << endl;  //bugs：“程序终止” 
	cout << map_it->second << endl;//？？？？输出“-1” 
	
//	map_it->first= "new key";  //不可给key_type类型复制 
	cout << ++map_it->second << endl;//？？？？输出“0”
		 
 	//=============
	word_count["Anna"] = 1;
	cout << word_count["Anna"] <<endl;  //输出其“值” 
	map_it = word_count.begin();  
	cout << map_it->first << endl;  //可以输出了   

	return 0;
}
