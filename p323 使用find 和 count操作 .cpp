//p323 ʹ��find �� count���� 
#include <iostream>
#include <utility>
#include <map>
using namespace std;
int main()
{
	multimap<string, string> authors;
	string name("zhangshan");
	authors.insert(make_pair(name, string("phone") ));//����string��������ȥ�� 
	authors.insert(make_pair(name, string("address") ));
	authors.insert(make_pair(name, string("email") ));	
	
	typedef multimap<string, string>::size_type sz_type;
	sz_type entries = authors.count(name); //�ҵ���zhangsan�� 
	multimap<string,string>::iterator iter = authors.find(name);//iterָ��zhangsan�ĵ�һ��ֵ 
	
	for (sz_type cnt = 0; cnt != entries; cnt++,iter++)//���� 
	{
		cout << iter->second<< endl;
	}

	return 0;
}
/*
phone
address
email
�밴���������. . .
*/