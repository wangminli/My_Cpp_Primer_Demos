//p323 使用find 和 count操作 
#include <iostream>
#include <utility>
#include <map>
using namespace std;
int main()
{
	multimap<string, string> authors;
	string name("zhangshan");
	authors.insert(make_pair(name, string("phone") ));//其中string（）可以去掉 
	authors.insert(make_pair(name, string("address") ));
	authors.insert(make_pair(name, string("email") ));	
	
	typedef multimap<string, string>::size_type sz_type;
	sz_type entries = authors.count(name); //找到“zhangsan” 
	multimap<string,string>::iterator iter = authors.find(name);//iter指向zhangsan的第一个值 
	
	for (sz_type cnt = 0; cnt != entries; cnt++,iter++)//遍历 
	{
		cout << iter->second<< endl;
	}

	return 0;
}
/*
phone
address
email
请按任意键继续. . .
*/