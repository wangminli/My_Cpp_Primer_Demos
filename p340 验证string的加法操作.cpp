//p340 ����֤"string�ļӷ�������ʹ�õĲ������ֱ���string �� const char*����"
#include <iostream>
using namespace std;
int main()
{
	string str = "string type";
	string str2 = str + " + const char*";
	cout << str2 << endl;
	//������string�������Ҳ�ǿ��Եģ��в�֪�� 
	string str3 = str +str2;
	cout << str3 << endl; 
 
	return 0;
}
