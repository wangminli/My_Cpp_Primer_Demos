//p295 string�е�find���� 
#include <iostream>
#include <vector>
#include <list>
#include <deque>
using namespace std;
int main()
{
	string name("AnnaBelle");
	string::size_type pos1 = name.find("Anna");
	cout << pos1 << endl; 
	
	string numerics("0123456789");
	string name1("rhdgh2d2");
	string::size_type pos = name1.find_first_of(numerics);
	cout << "found number at index : " << pos << ", the element is " << name1[pos] <<endl;
	
	//�������CFree����ѭ���� ��pos2��ֵû����Ϊ������ֵ�� 
	string::size_type pos2 = 0;
	while (pos2 = name1.find_first_of(numerics, pos2))
	{	
		cout << "found number at index : " << pos2 << ", the element is " << name1[pos2] <<endl;
		pos2++;
	}

	return 0;
}
