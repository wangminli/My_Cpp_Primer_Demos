//p393 C++初级程序员常犯的错误 
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
	Person KuoHao(); 					//右括号，没问题, 但编译器将KuoHao当成一个函数的声明了 
	cout << KuoHao.getAge() << endl;	//KuoHao is a function 
	return 0;
}
