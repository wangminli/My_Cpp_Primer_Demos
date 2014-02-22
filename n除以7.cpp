//
#include<iostream>
using namespace std;


class A
{
public:
    ~A()
    {
        cout<<"~A"<<endl;
    }
};

class B:public A
{
public:
    ~B()
    {
        cout<<"~B"<<endl;
    }
};

void test(void)
{
    B b;
}

int main()
{
	B b; 
	
	return 0;
}
/*==========运行结果============

*/