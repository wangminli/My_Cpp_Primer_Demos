//p311 ��map�Ľ����� 
#include <iostream>
#include <vector>
#include <list>
#include <utility> 
#include <map>
#include <deque>
using namespace std;
int main()
{
	map<string, int> word_count;
	map<string, int>::iterator map_it = word_count.begin();
//	cout << map_it->first << endl;  //bugs����������ֹ�� 
	cout << map_it->second << endl;//�������������-1�� 
	
//	map_it->first= "new key";  //���ɸ�key_type���͸��� 
	cout << ++map_it->second << endl;//�������������0��
		 
 	//=============
	word_count["Anna"] = 1;
	cout << word_count["Anna"] <<endl;  //����䡰ֵ�� 
	map_it = word_count.begin();  
	cout << map_it->first << endl;  //���������   

	return 0;
}
