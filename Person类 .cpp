//p392:类的内置类型成员，只有对象在全局作用域下才初始化，在局部作用域下不会初始化，其值不确定。Person类 
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
//===============运行结果==================
        0
        2008950864
请按任意键继续. . .
*/