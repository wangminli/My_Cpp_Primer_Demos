//p345 CP4���죺ν�ʵ�ʹ�� 
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool dividesby3(int i)
{
  if((i%3)==0)return true;
  return false;
}

int main()
{
	 vector<int> v;
	 int i;
	 for(i=0;i<20;i++)v.push_back(i);
		 cout << "Sequence:/n";
	 
	 for(i=0;i<v.size();i++)cout << v[i] <<" ";
	 	cout << endl;
	 	
	 //count_if() :The count_if() function returns the number of elements between start and end for which the predicate p returns true.
	 i=count_if(v.begin(),v.end(),dividesby3);//ν�ʾ������ﱻ�õ���
	 cout << i<<" numbers are divisible by 3./n"<<endl;
	 
	 return 0;
}