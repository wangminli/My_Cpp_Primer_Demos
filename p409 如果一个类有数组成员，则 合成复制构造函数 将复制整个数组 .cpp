//p409 ���һ�����������Ա���� �ϳɸ��ƹ��캯�� �������������� 
#include <iostream>
#include <vector>
#include <iterator> 
#include <algorithm>
#include <numeric>
using namespace std;

class TestArray							 
{
public:

	int a[7] ;							
};

int main()
{
	TestArray ta ;
	ta.a[0] = 0;
	ta.a[1] = 1;
	ta.a[2] = 2; 
	TestArray ta2 = ta;					//��ʱ��ʹûд���ƹ��캯����Ȼ�����������Ա�� ָ������ ʱ����������д 
	for (int i = 0; i < 7; i++)			//print 
		cout << "ta2.a[" << i << "] == "<<ta2.a[i] << endl;
	 
	return 0;
}
/*
//===============���н��==================
ta2.a[0] == 0
ta2.a[1] == 1
ta2.a[2] == 2
ta2.a[3] == 2009091625
ta2.a[4] == 2009091650
ta2.a[5] == 4246676
ta2.a[6] == 2293624
�밴���������. . .
*/