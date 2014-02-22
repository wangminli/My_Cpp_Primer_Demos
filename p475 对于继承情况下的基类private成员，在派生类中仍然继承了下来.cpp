/*对于继承情况下的基类private成员，在派生类中仍然继承了下来，只不过它不能直接访问, 
 即使在类里也不行, 更不用说是类对象了。
*/ 
#include<iostream>
using namespace std;

class C
{
	public:
	C(int val): m_c(val){}
	
	private:
	int m_c; 
} ;
class D:public C
{
	public :
	D(int val1, int val2):C(val1),m_d(val2){}
	int m_d; 
} ; 

int main()
{
	cout << sizeof(C) << endl;
	cout  << sizeof(D) <<endl; 
	D obj(2, 25); 
	cout << &obj << " " << &obj.m_d <<endl;
	
	D *ptr = &obj;
	int *iptr = (int*) ptr;
	cout << *iptr << " " << *(iptr+1) << endl; 
	 
	
	return 0;
}
/*==========运行结果============
4
8
0x22ff70 0x22ff74
2 25
请按任意键继续. . .
*/