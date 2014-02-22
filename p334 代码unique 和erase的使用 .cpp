//p334 ?����unique ��erase��ʹ�� 
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;
//��vec��ӡ��� 
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
	
	//���� 
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
�밴���������. . .
*/