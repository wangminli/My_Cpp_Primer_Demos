/*
��Ŀ������һ������ n��������к�Ϊn �����������С�
�������� 15������1+2+3+4+5=4+5+6=7+8=15���������3 ����������1-5��4-6 ��7-8��
*/
#include <iostream>
#include <vector>
#include <iterator> 
#include <algorithm>
#include <numeric>
using namespace std;
int main()
{
	cout << "������һ������" << endl;
	int num ;
	
	while(cin >> num, !(num % 2))//ż�������ֻ��һ�֣��������� 
	{
		cout << "���������"<< num << "ֻ��һ���������У��������� " << num << endl; 
		cout << "������һ������"<< endl; 
	}
		 
	int mid1 = (num-1)/2;
	int mid2 = mid1+1;
	cout << num <<"�������У�"<< mid1 << "-" << mid2 <<"\t"; //�����������Ȼ�ģ�����ȡ15�м��������������7��8 
	for (int i = 2; i < num; i++)
	{
		if(!(num % i))
		{
			int yushu = num/i;
			int juli =  (yushu-1)/2;
			int front = i -juli;	//ǰ���Ǹ��� 
			int back = i +juli;		//�����Ǹ��� 
	 		cout << front <<"-" << back <<" "; 
		}		
	}
	cout << endl;
	return 0;
}
/*
//===============���н��==================
������һ������
15
15�������У�7-8 1-5 4-6
�밴���������. . .
*/