//map��operator[]ʹ��+��������ֵ 
#include <map>
#include <iostream>
using namespace std;

int main()
{
  map<int, int> iiMap;
  iiMap[1] = 2; //2		(��ֵ) 
  iiMap[2];		// 0
  string str = iiMap[1];//(��ֵ) 
  cout << iiMap[1] << iiMap[2] << iiMap[3] << endl;

  return 0;
}
/*
200
�밴���������. . .
*/