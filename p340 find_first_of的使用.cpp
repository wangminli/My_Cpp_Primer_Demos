//p340 find_first_of的使用 
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <list> 
using namespace std;
int main()
{
	list<string> roster1;
	list<string> roster2;
	for (list<string>::size_type ix = 0; ix != 20; ix++)	//填数 
	{
		roster1.push_back("ab");
		roster2.push_back("abcd");
	}
	
	size_t cnt = 1;	
 	list<string>::iterator it = roster1.begin();
 	while ((it = find_first_of(it, roster1.end(),  roster2.begin(), roster2.end()))
				!=roster2.end())
	{
		cnt++;
		it++;	
	} 	
 	cout << "Found " << cnt << " names on both rosters" << endl;
	return 0;
}
