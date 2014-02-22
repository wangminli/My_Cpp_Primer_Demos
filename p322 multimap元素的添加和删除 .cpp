//p322 multimap元素的添加和删除 
#include <iostream>
#include <utility>
#include <map>
using namespace std;
int main()
{
	multimap<string, string> authors;
	authors.insert(make_pair(string("Barth, John"), string("Sot-Weed Factor") ));//其中string（）可以去掉 
	authors.insert(make_pair(string("Barth, John"), string("Lost in the Funhouse") ));	
	
	//erase
	string search_item("Barth, John");
//	string search_item("Kazuo Ishiguro");
	multimap<string, string>::size_type cnt = authors.erase(search_item);
	cout << cnt << endl; 
	return 0;
}
/*
2
*/