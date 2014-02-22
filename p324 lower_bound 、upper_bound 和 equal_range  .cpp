//p324 lower_bound 、upper_bound 和 equal_range 
#include <iostream>
#include <utility>
#include <map>
using namespace std;
int main()
{
	multimap<string, string> authors;
	string name("lisi");
	authors.insert(make_pair(name, string("phone") ));//其中string（）可以去掉 
	authors.insert(make_pair(name, string("address") ));
	authors.insert(make_pair(name, string("email") ));
	string name2("zhangsan"); 
	authors.insert(make_pair(name2, string("phone") ));	
	
	//lower_bound 和 upper_bound 
	typedef multimap<string , string>::iterator authors_it;
	authors_it beg = authors.lower_bound(name),
				end =  authors.upper_bound(name);
	while (beg != end)
	{
		cout << beg->second <<endl;
		++beg; 
	}
	
	//equal_range
	pair<authors_it, authors_it> pos = authors.equal_range(name);
	while (pos.first != pos.second)
	{
	
		cout << pos.first->second <<endl;//如果改成 pos.second->second效果是怎样的 
		++pos.first; 
	} 
		 
	return 0;
}
/*
phone
address
email
请按任意键继续. . .
*/