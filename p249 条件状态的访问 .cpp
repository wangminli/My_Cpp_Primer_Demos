//p249 ����״̬�ķ��� 
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
�밴���������. . .
*/