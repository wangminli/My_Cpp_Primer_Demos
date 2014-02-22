//p299 compare的验证 
#include <iostream>
#include <vector>
#include <list>
#include <deque>
using namespace std;
int main()
{
	string cobol_program_crash("abend");
	string cplus_program_crash("abort");
	cout << (cobol_program_crash > cplus_program_crash) <<endl; 
 	cout << cobol_program_crash.compare(cplus_program_crash) <<endl;
 	
 	string s1("abcdef");
 	string s2("abcd");
 	cout << (s1 > s2) <<endl;
 	
 	char second[] = "C++ Primer, 2nd Edition";
 	string third_ed("C++ Primer, 3nd Edition");
 	string forth_ed("C++ Primer, 4nd Edition");
 	
 	cout << forth_ed.compare(second) << endl;
 	//下面代码编译报错 
	cout << forth_ed.compare(forth_ed.find("4th"), 3, third_ed, third_ed.find("3rd"), 3) << endl;
 	
 	
	return 0;
}
/*
0
-1
1
1

This application has requested the Runtime to terminate it in an unusual way.
Please contact the application's support team for more information.
请按任意键继续. . .
*/ 