//p293 ��ҳ������֤ 
#include <iostream>
#include <vector>
#include <list>
#include <deque>
using namespace std;
int main()
{
	string s("1234567890");
	s.erase(s.size()-5, 5); //ɾ������5���ַ�
	cout << s <<endl;
	
	s.insert(s.size(), 5, '!'); //��sĩβ����5��������
 	cout << s <<endl;
 	
 	char *cp = "Stately plump Buck";
 	string ss ;
 	ss.assign(cp, 7);
 	cout << ss << endl;
 	
 	ss.insert(ss.size(), cp + 7);
 	cout << ss <<endl;
 	
 	string s1("some string");
 	string s2("some other string");
 	s1.insert(s1.begin(), s2.begin(), s2.end());
 	cout << s1 <<endl;
 	
 	s1.insert(0, s2);
 	cout << s1 <<endl;
 	
 	s1.insert(0, s2, 0, s2.size());
 	cout << s1 <<endl;
 	
	return 0;
}
