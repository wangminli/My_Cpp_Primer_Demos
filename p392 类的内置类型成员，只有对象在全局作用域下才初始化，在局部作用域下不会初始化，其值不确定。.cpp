//p393 C++��������Ա�����Ĵ��� 
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
	Person KuoHao(); 					//�����ţ�û����, ����������KuoHao����һ�������������� 
	cout << KuoHao.getAge() << endl;	//KuoHao is a function 
	return 0;
}
