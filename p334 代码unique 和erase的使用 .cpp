//p334 ?代码unique 和erase的使用 
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;
//将vec打印输出 
void output(vector<string> &vec) 
{
	for (vector<string>::iterator iter = vec.begin(); iter != vec.end(); ++iter)
 		cout << *iter << "\t";
	cout << endl;
}

int main()
{
	vector<string> words;
	words.push_back("fox");
	words.push_back("jumps");
	words.push_back("over");
	words.push_back("quick");
	words.push_back("red");
	words.push_back("red");
	words.push_back("slow");
	words.push_back("the");
	words.push_back("the");
	words.push_back("turtle");
	//out 
	output(words);
	
	//排序 
	sort(words.begin(), words.end());
 	vector<string>::iterator end_unique = unique(words.begin(), words.end());
 	//out 
 	output(words);
 	
	words.erase(end_unique, words.end());
	//out
  	output(words);
		
	return 0;
}
/*
fox     jumps   over    quick   red     red     slow    the     the     turtle

fox     jumps   over    quick   red     slow    the     turtle  the     turtle

fox     jumps   over    quick   red     slow    the     turtle
请按任意键继续. . .
*/