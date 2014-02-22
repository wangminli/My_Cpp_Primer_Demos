//p307 ?pair的验证 
#include <iostream>
#include <vector>
#include <list>
#include <utility> 
#include <deque>
using namespace std;
int main()
{
	pair<string, string> anon;
	pair<string, int> word_count;
	pair<string, vector<int> > line;
	//验证
	cout << anon.first <<" " << anon.second << endl;
	cout << word_count.first << " " << word_count.second <<endl;
	//cout << line.first << " " << line.second << endl;   //不能输出 
	
	typedef pair<string, string> Author;
	Author proust("Narcel", "Proust");
	Author jouce("James", "Joyce");
	//输出
	cout << proust.first << " " << proust.second <<endl;
	cout <<jouce.first << " " << proust.second << endl;
		
	//验证make_pair 
	pair<string, string> next_auth;
	string first, second;
	cout << "请输入两个字符串" << endl;
	cin >> first >> second ;
	next_auth = make_pair(first, second);
	cout << next_auth.first << " " << next_auth.second <<endl;		 
	return 0;
}
