#include <iostream>
using namespace std;
int main()
{
	int ival;
	cin >> ival;
	cout << "ival ==" << ival <<endl; 
	
	if(cin.fail())
		cout << "ʧ�ܣ�" <<endl;
	else 
		cout << "�ɹ���" <<endl; 
		 
	return 0;
}
/*
���н����
 
asd
ival ==2147344384
ʧ�ܣ�
*/