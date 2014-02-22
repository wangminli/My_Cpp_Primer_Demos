//p249 条件状态的访问 
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;
int main()
{
	int i;
	cin >> i;
	cout  << cin.rdstate() << endl; 
	//cin.setstate(istream::badbit || istream::failbit);
	cin.clear();
	cout << cin.rdstate() << endl;	 
	return 0;
}
/*
er
4
0
请按任意键继续. . .
*/