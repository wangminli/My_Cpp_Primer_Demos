//p334 检测unique
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
	

	words.push_back("a");
//	words.push_back("a");
//	words.push_back("b");
	words.push_back("b");
	words.push_back("b");
//	words.push_back("c");
	words.push_back("c");
	
	words.push_back("d");
//	words.push_back("slow");
//	words.push_back("the");
//	words.push_back("the");
//	words.push_back("turtle");
	//out 
	output(words);
	
	
	//排序 
	sort(words.begin(), words.end());
	output(words);
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