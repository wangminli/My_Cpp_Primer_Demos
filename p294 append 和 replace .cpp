//p294 append ºÍ replace 
#include <iostream>
#include <vector>
#include <list>
#include <deque>
using namespace std;
int main()
{
	string s("hello world"); 
	string s2 = s.substr(6, 5);
	string s3 = s.substr(6);
	cout << s2 << endl;
	cout << s3 <<endl;
 	
 	string ss("C++ Primer");
	ss.append(" 3rd Ed");
	cout << ss << endl;
	//µÈ¼Û 
//	ss.insert(ss.size(), " 3rd Ed");
//	cout << ss <<endl;

	ss.replace(11, 3, "4th");
	cout << ss <<endl; 
	
	ss.erase(11, 3);
	cout << ss <<endl;
	
	ss.insert(11, "4th");
	cout << ss <<endl;
	
	ss.replace(11, 3, "Fourth");
	cout << ss << endl;
	return 0;
}
