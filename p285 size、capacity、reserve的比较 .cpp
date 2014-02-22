//p285 size、capacity、reserve的比较 
#include <iostream>
#include <vector>
#include <list>
#include <deque>
using namespace std;
int main()
{
	vector<int> ivec;
	cout << "没有分配空间时,他们各自的值是：" << endl; 
	cout << "ivec.size() = " << ivec.size() <<endl;
	cout << "ivec.capacity() =" << ivec.capacity() <<endl;
 	//赋值
 	for(vector<int>::size_type i = 0; i != 24; i++)
 		ivec.push_back(i);
	//验证 
	cout << "分配空间之后他们各自的值是："  <<endl; 
 	cout << "ivec.size() = " << ivec.size() <<endl;
	cout << "ivec.capacity() =" << ivec.capacity() <<endl;	
	//赋值 
	ivec.resize(50);
	//验证
	cout << "ivec.resize(50)后：" <<endl; 
	cout << "ivec.size() = " << ivec.size() <<endl;
	cout << "ivec.capacity() =" << ivec.capacity() <<endl;	
	//赋值 
	while(ivec.size() != ivec.capacity()) 
		ivec.push_back(0);
	//验证
	cout << "ivec.size() == ivec.capacity()时：" <<endl;
 	cout << "ivec.size() = " << ivec.size() <<endl;
	cout << "ivec.capacity() =" << ivec.capacity() <<endl;	
	//赋值
	ivec.push_back(47);
	cout << "ivec.push_back(47)后：" <<endl;
 	cout << "ivec.size() = " << ivec.size() <<endl;
	cout << "ivec.capacity() =" << ivec.capacity() <<endl;
	return 0;
}
/*
没有分配空间时,他们各自的值是：
ivec.size() = 0
ivec.capacity() =0
分配空间之后他们各自的值是：
ivec.size() = 24
ivec.capacity() =32
ivec.resize(50)后：
ivec.size() = 50	（？？？？？？？？？？？？？？？？） 
ivec.capacity() =50
ivec.size() == ivec.capacity()时：
ivec.size() = 50
ivec.capacity() =50
ivec.push_back(47)后：
ivec.size() = 51
ivec.capacity() =100
请按任意键继续. . .
*/