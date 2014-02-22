//p336 find运算 
#include <iostream>
#include <vector>
#include <utility>

#include <map>
using namespace std;
int main()
{
	vector<int> vec;
	for (vector<int>::size_type ix = 0; ix != 10; ix++)
	{
		vec.push_back(ix);
	}
 
 	int search_value = 7;
	vector<int>::const_iterator result = find(vec.begin(), vec.end(), search_value);
 	cout << "The value " << search_value << ( result == vec.end()?"is not found !" : " is found !" )<< endl;
	return 0;
}
/*
The value 7 is found !
请按任意键继续. . .
*/