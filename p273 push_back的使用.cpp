//p273 push_back��ʹ�� 
#include <iostream>
#include <vector>
#include <list>
#include <deque>
using namespace std;
int main()
{
	vector<string> container; //����vector���Ը���Ϊ list �� deque���� 
	string text_word;
	
	while (cin >> text_word)
	{
		container.push_back(text_word); 
	} 
	//��ȡcontainer��ÿ���ַ��� 
	cout << "�����ȡ�ַ���" <<endl; 
	for (vector<string>::iterator iter = container.begin(); iter != container.end(); iter++)
	{
		cout << *iter <<endl;
	} 
		 
	return 0;
}
/*
wang
min
li
^Z
�����ȡ�ַ���
wang
min
li
�밴���������. . .
*/