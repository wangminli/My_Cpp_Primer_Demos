/*
题目：输入一个正数 n，输出所有和为n 连续正数序列。
例如输入 15，由于1+2+3+4+5=4+5+6=7+8=15，所以输出3 个连续序列1-5、4-6 和7-8。
*/
#include <iostream>
#include <vector>
#include <iterator> 
#include <algorithm>
#include <numeric>
using namespace std;
int main()
{
	cout << "请输入一个数字" << endl;
	int num ;
	
	while(cin >> num, !(num % 2))//偶数的情况只有一种，即它本身。 
	{
		cout << "输入的数字"<< num << "只有一个正数序列，即它本身： " << num << endl; 
		cout << "请输入一个奇数"<< endl; 
	}
		 
	int mid1 = (num-1)/2;
	int mid2 = mid1+1;
	cout << num <<"的序列有："<< mid1 << "-" << mid2 <<"\t"; //这种情况是显然的，例如取15中间的两个数，就是7和8 
	for (int i = 2; i < num; i++)
	{
		if(!(num % i))
		{
			int yushu = num/i;
			int juli =  (yushu-1)/2;
			int front = i -juli;	//前面那个数 
			int back = i +juli;		//后面那个数 
	 		cout << front <<"-" << back <<" "; 
		}		
	}
	cout << endl;
	return 0;
}
/*
//===============运行结果==================
请输入一个数字
15
15的序列有：7-8 1-5 4-6
请按任意键继续. . .
*/