//p419 HasStr类 
#include <iostream>
using namespace std;

class  HasStr
{
public:
	HasStr(int *p, int i):ptr(p), val(i){}
	
	int* get_ptr() const{	return ptr;}
	int get_int() const {	return val;	}
	void set_ptr(int *p){	ptr = p;}
	void set_int(int i){ val = i; }
	int get_ptr_val() const { return *ptr; }
	int set_ptr_val(int val) const{ *ptr = val; }

private:
	int *ptr;
	int val; 
	
} ;

int main()
{
	int obj = 0;
	HasStr ptr1(&obj, 42);
	HasStr ptr2(ptr1);
	
	cout << ptr1.get_ptr() << endl;			//0x22ff74
	cout << ptr1.get_int() << endl;			//42
	cout << ptr1.get_ptr_val() << endl;		//0
	
	cout << ptr2.get_ptr() << endl;			//0x22ff74
	cout << ptr2.get_int() << endl;			//42
	cout << ptr2.get_ptr_val() << endl;		//0
	
	ptr1.set_int(7);
	cout << ptr1.get_int() << endl;
	cout << ptr2.get_int() << endl;
	
	ptr1.set_ptr_val(5);
	cout << ptr1.get_ptr_val() << endl;
	cout << ptr2.get_ptr_val() << endl;
	
	int *ip = new int(47);
	HasStr ptr(ip, 10);
	cout << ptr.get_ptr_val() << endl;
	delete ip ;
	ptr.set_ptr_val(13);
	cout << ptr.get_ptr_val() << endl;	//13？？ 赋值成功了 !?
	return 0;
}
/*
//===============运行结果==================
0x22ff74
42
0
0x22ff74
42
0
7
42
5
5
47
13		？？？ 
请按任意键继续. . .

*/