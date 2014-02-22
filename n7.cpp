//
#include<iostream>
using namespace std;

int main()
{
//	int n;
//	cin >> n;
//	int ji = (n << 3 ) - n; 
//	int shang  = (ji >> 3) +ji; 
//	cout << ji << endl; 
//	cout << shang << endl; 
	
	int n =21;
	int count = 0; 
	while ( n == 7 | (n = n >> 3) > 0 ) 
		count++; 
	 cout << count << endl; 

	
	return 0;
}
/*==========运行结果============

*/