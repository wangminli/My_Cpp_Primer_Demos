//map的operator[]使用+可做左右值 
#include <map>
#include <iostream>
using namespace std;

int main()
{
  map<int, int> iiMap;
  iiMap[1] = 2; //2		(左值) 
  iiMap[2];		// 0
  string str = iiMap[1];//(右值) 
  cout << iiMap[1] << iiMap[2] << iiMap[3] << endl;

  return 0;
}
/*
200
请按任意键继续. . .
*/