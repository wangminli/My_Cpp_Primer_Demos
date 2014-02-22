#include <iostream>
#include<stdexcept>
using namespace std;
int main()
{
	int ival;
	cin >> ival;  //ival == 47 
	istream::iostate old_state  = cin.rdstate(); //old_state == goodbit 
	cin.clear();
//	process_input();
	cin.clear(old_state);
	return 0;
}

