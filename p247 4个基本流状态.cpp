/*

������	     fail��־λ	  oef��־λ  bad��־λ
ios::goodbit	0			0			0 
ios::badbit		0			0			1
ios::eofbit		0			1			0
ios::failbit	1			0			0


*/ 
#include <iostream>
#include<stdexcept>
using namespace std;
int main()
{
	int ival;
 	cout << "�����룺" <<endl; 
 	cin >> ival;
 	//cin��4��״̬ 
	cout << cin.goodbit;
	cout << cin.badbit;
	cout << cin.eofbit;
	cout << cin.failbit;
	
 	cout <<endl;
	return 0;
}
/*
���н����
0124 
*/
