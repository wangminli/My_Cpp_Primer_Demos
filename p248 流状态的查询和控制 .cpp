//p248 流状态的查询和控制 
#include <iostream>
#include <vector>
#include <algorithm>
#include <stdexcept>
#include <numeric>
using namespace std;
int main()
{
	int ival;
	while (cin >> ival, !cin.eof())
	{
		if (cin.bad())
			throw runtime_error("IO stream corrupted ");
		if (cin.fail())
		{
			cerr << "bad data, try again";
			cin.clear(istream::failbit);
			//continue;bugs
			break;
		}
	}
		 
	return 0;
}
