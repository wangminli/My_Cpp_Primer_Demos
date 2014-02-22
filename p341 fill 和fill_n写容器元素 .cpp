//p341 fill 和fill_n写容器元素 
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;
int main()
{
	vector<int> vec;
	for (vector<int>::size_type ix = 0; ix != 15; ix++)//填数 
	{
			vec.push_back(47);
			cout << vec[ix] << "  ";
	}
	cout << endl;
	
	//fill
	fill(vec.begin(), vec.begin()+vec.size()/2, 10); 
 	//out
 	for (vector<int>::size_type ix = 0; ix != 15; ix++) 
		 cout << vec[ix] << "  ";
	cout << endl;
	
	//fill_n
	fill_n(vec.begin(), 4, 23);
 	//out
 	for (vector<int>::size_type ix = 0; ix != 15; ix++) 
		 cout << vec[ix] << "  ";
	cout << endl;
	
	//bugs
//	vector<int> vec1;//为初始化大小，故下面的操作时危险的 
//	fill_n(vec1.begin(), 5, 7); 
	return 0;
}
/*
47  47  47  47  47  47  47  47  47  47  47  47  47  47  47
10  10  10  10  10  10  10  47  47  47  47  47  47  47  47
23  23  23  23  10  10  10  47  47  47  47  47  47  47  47
请按任意键继续. . .
*/