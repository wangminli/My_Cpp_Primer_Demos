#include <iostream>
#include <vector>
using namespace std;
int main()
{
	string word;
	vector<string> text;
	//Ϊword ���Ԫ�� 
	while(cin >> word)  	//�����ctrl + z���˳� 
	{
		text.push_back(word);
	}
	//���ÿ��vector���� 
	for(vector<int>::size_type ix = 0; ix != word.size(); ++ix)
	{
		cout << text[ix] <<endl;
	}
		 
	return 0;
}
