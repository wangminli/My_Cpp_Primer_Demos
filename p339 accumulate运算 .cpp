//p339 accumulate���� 
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;
int main()
{
	vector<int> vec;
	for (vector<int>::size_type ix = 0; ix != 10; ix++) //���ڵ��ܺ�Ϊ45.��1+2+3+����+9�� 
	{
		vec.push_back(ix);
	}
	 
	double sum = accumulate(vec.begin(), vec.end(), 42);
	cout << sum << endl;
	//��֤�����䷵�ؽ�����;����������ʵ�ε����ͣ�42.8����	
	cout << accumulate(vec.begin(), vec.end(), 42.8) << endl;
		 
	return 0;
}
/*
87
87.8
�밴���������. . .
*/ 

 