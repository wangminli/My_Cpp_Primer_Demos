//p291 string���캯��ʹ���ַ�ָ�������� 
#include <iostream>
#include <vector>
#include <list>
#include <deque>
using namespace std;
int main()
{
	char *cp = "Hiya";
	char c_array[] = "World!!!!";
	char no_null[] = {'H', 'i'};
	
	string s1(cp);
	string s2(c_array, 5);
	string s3(c_array+5, 4); 
//	string s4(no_null); //error
	string s5(no_null,2); 
 
 	//��֤
	 cout << s1 <<endl;
	 cout << s2 <<endl;
	 cout << s3 <<endl;
//	 cout << s4 <<endl;
	 cout << s5 <<endl; 
	return 0;
}
/*
Hiya
World
!!!!
Hi
�밴���������. . .
*/ 