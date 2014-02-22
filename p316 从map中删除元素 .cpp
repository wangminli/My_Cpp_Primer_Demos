//p316 从map中删除元素 
#include <iostream>
#include <utility>
#include <map>
using namespace std;
int main()
{
	typedef map<string, int> MAP;
	MAP removal;
	string removal_word = "Anna";
	removal.insert(MAP::value_type(removal_word, 47)); 
 	if (removal.erase(removal_word))
 		cout << "Ok," << removal_word << " removed" << endl;
	else
		cout << "oops" <<removal_word << "not found!" <<endl;
	
	return 0;
}
/*
Ok,Anna removed
请按任意键继续. . .
*/