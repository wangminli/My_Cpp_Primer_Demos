//p312 �±���Ϊ�ı������ 
#include <iostream>
#include <utility>
#include <map>
using namespace std;
int main()
{
	map<string, int> word_count;
	string word;
	while (cin >> word)
	{
		cout << (++word_count[word]) << endl;
	} 
	
		 
	return 0;
}