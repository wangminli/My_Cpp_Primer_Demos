//p339 accumulate��string�������� 
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;
int main()
{
	vector<string> v;
	for (vector<string>::size_type ix = 0; ix != 10; ix++) 
	{
		v.push_back("abc ");
	}
	 
	string strsum = accumulate(v.begin(), v.end(), string(""));	//���в��ܽ�string("")��Ϊ"",""�ķ���������const char* ���͵� 
//	string strsum = accumulate(vec.begin(), v.end(), ""/*bug*/);		//������� 
	cout << strsum << endl;
		 
	return 0;
}
