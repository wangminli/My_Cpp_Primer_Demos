//p393 C++��������Ա�����Ĵ���Person KuoHao();
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
//	Person KuoHao(); 					//�����ţ�û����, ����������KuoHao����һ�������������ˣ�������һ��Person���� 
//	cout << KuoHao.getAge() << endl;	//KuoHao is a function 
	
	Person Ok = Person();				//���� 
	Ok.setName("Ok");
	Ok.setAge(20);
	cout << Ok.getName() <<"\t" << Ok.getAge() << endl;

	return 0;
}
/*
Ok      20
�밴���������. . .
*/ 