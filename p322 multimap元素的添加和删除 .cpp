//p322 multimapԪ�ص���Ӻ�ɾ�� 
#include <iostream>
#include <utility>
#include <map>
using namespace std;
int main()
{
	multimap<string, string> authors;
	authors.insert(make_pair(string("Barth, John"), string("Sot-Weed Factor") ));//����string��������ȥ�� 
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