//p393 C++初级程序员常犯的错误Person KuoHao();
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
//	Person KuoHao(); 					//右括号，没问题, 但编译器将KuoHao当成一个函数的声明了，它返回一个Person对象 
//	cout << KuoHao.getAge() << endl;	//KuoHao is a function 
	
	Person Ok = Person();				//可以 
	Ok.setName("Ok");
	Ok.setAge(20);
	cout << Ok.getName() <<"\t" << Ok.getAge() << endl;

	return 0;
}
/*
Ok      20
请按任意键继续. . .
*/ 