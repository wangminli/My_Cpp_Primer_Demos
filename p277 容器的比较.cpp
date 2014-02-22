//p277 容器的比较 
#include <iostream>
#include <vector>
#include <list>
#include <deque>
using namespace std;
int main()
{
 	vector<int>	 ivec1, 		//1,3,5,7,9,12
				 ivec2, 		//0，2，4，6，8，10，12 
				 ivec3, 		//1,3,9 
				 ivec4, 		//1,3,5,7
				 ivec5;			//1,3,5,7,9,12
	 //为他们赋值 
 	ivec1.push_back(1);
 	ivec1.push_back(3);
 	ivec1.push_back(5);
 	ivec1.push_back(7);
 	ivec1.push_back(9);
 	ivec1.push_back(12);
 	
 	ivec2.push_back(0);
	ivec2.push_back(2);
	ivec2.push_back(4);	 
	ivec2.push_back(6);
	ivec2.push_back(8);
	ivec2.push_back(10);
	ivec2.push_back(12);
	
	ivec3.push_back(1);
	ivec3.push_back(3);
	ivec3.push_back(9);
	
	ivec4.push_back(1);
	ivec4.push_back(3);
	ivec4.push_back(5);
	ivec4.push_back(7);
	
	ivec5.push_back(1);
	ivec5.push_back(3);
	ivec5.push_back(5);
	ivec5.push_back(7);
	ivec5.push_back(9);
	ivec5.push_back(12);
	//比较 
	cout << "ivec1 < ivec2:" << (ivec1 < ivec2) <<endl;//false 
	cout << "ivec2 < ivec1:" << (ivec2 < ivec1) <<endl;//true
	cout << "ivec1 < ivec3:" << (ivec1 < ivec3) <<endl;//true
	cout << "ivec1 < ivec4:" << (ivec1 < ivec4) <<endl;//f
	cout << "ivec1 == ivec5:" << (ivec1 == ivec5) <<endl;//t
	cout << "ivec1 == ivec4:" << (ivec1 == ivec4) <<endl;//f
	cout << "ivec1 != ivec4:" << (ivec1 != ivec4) <<endl;//t
	
	return 0;
}
/*
ivec1 < ivec2:0
ivec2 < ivec1:1
ivec1 < ivec3:1
ivec1 < ivec4:0
ivec1 == ivec5:1
ivec1 == ivec4:0
ivec1 != ivec4:1
请按任意键继续. . .
*/