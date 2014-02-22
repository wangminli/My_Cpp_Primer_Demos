//p275 insert 插入一段元素 
/*insert 的三种形式 
iterator insert( iterator pos, const TYPE &val );
void insert( iterator pos, size_type num, const TYPE &val );
void insert( iterator pos, input_iterator start, input_iterator end );
*/
#include <iostream>
#include <vector>
#include <list>
#include <deque>
using namespace std;
int main()
{
	vector<string> svec;
	svec.insert(svec.end(),10,"Anna,");
	
	string sarray[4] = { "AAAA " , "BBBB ", "CCCC ", "DDDD "};
 	for (vector<string>::iterator iter = svec.begin(); iter != svec.end(); iter++)//print 
		cout << *iter <<endl;
		
	list<string> slist;
	slist.insert(slist.end(), sarray, sarray+4);//同：slist.insert(slist.begin(), sarray, sarray+4); 
	slist.insert(slist.end(), sarray+2, sarray+4);
	for (list<string>::iterator iter = slist.begin(); iter != slist.end(); iter++)//print
		cout << *iter ;
	cout << endl; 
			 
	return 0;
}
/*运行结果： 
Anna,
Anna,
Anna,
Anna,
Anna,
Anna,
Anna,
Anna,
Anna,
Anna,
AAAA BBBB CCCC DDDD CCCC DDDD 
请按任意键继续. . .
*/