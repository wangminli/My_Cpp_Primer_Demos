#include <iostream>
using namespace std;
int main()
{
	int i;
//	cin >> i;//ȥ���˾������⣬���� 
	if(cin >> i)
	{
		cout << "cin��������ɹ���" <<endl; 
	} 
	else
	{
		cout << "cin��������ʧ�ܣ�" <<endl; 
	}
	
	while (cin >> i )
	{
		cout << "cin��������ɹ���" <<endl; 
	} 
 
	return 0;
}
