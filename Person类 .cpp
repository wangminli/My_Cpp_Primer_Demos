//p392:����������ͳ�Ա��ֻ�ж�����ȫ���������²ų�ʼ�����ھֲ��������²����ʼ������ֵ��ȷ����Person�� 
#include <iostream>
using namespace std;

class Person
{
	public:
	string getName()
	{
		return this->name;
	}
	int getAge()
	{
		return this->age;
	}
	void setName(string name)
	{
		this->name = name;
	}
	void setAge(int age)
	{
		this->age= age;
	}
	
	private:
	string name;
	int age;
} ;

Person QuanJu;

int main()
{
	Person JuBu;
	
	cout << QuanJu.getName() << "\t" << QuanJu.getAge() << endl;
	cout << JuBu.getName() << "\t" <<JuBu.getAge() <<endl;
		 
	return 0;
}
/*
//===============���н��==================
        0
        2008950864
�밴���������. . .
*/