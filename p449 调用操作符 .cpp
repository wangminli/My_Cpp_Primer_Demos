//p449 ���ò����� 
#include <iostream>
#include <vector>
#include <iterator> 
#include <algorithm>
#include <numeric>
using namespace std;

struct absInt
{
	int operator()(int val)
	{
		return val < 0 ?-val:val;
	}	
} ;

int main()
{
	int i =-42;
	absInt absObj;
	int ui = absObj(i);
	cout << ui << endl;
		 
	return 0;
}
/*
//===============���н��==================
42
�밴���������. . .

*/