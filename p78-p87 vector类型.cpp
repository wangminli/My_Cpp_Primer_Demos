//vector��ʹ�� 
#include<iostream>
#include<vector>
using namespace std;
 

int main()
{
	//���ֳ�ʼ����ʽ
	vector<int>  v1;	//����֤��������ʹ�á�����+���ơ��ķ�ʽ��ֵ����vector<int> v1.push_back(n) �ķ�ʽ�� 
	 //ѭ����ֵ 
    for(vector<int>::size_type ix = 0; ix != 10; ++ix)
    	v1.push_back(ix);
 	//��ʾ��Ϣ 
	for(vector<int>::size_type ix = 0; ix != v1.size(); ++ix)
		cout<<v1[ix]<<endl;
	cout<<endl;
	
	vector<int> v2 = v1; 
	for(vector<int>::size_type ix = 0; ix != v1.size(); ++ix)
		cout<<v2[ix]<<endl;
	cout<<endl;
	
	vector<int> v3(4,47);
	for(vector<int>::size_type ix = 0; ix != v1.size(); ++ix)
		cout<<v3[ix]<<endl;
	cout<<endl;
	
	vector<int> v4(5);	//v4����ֵ��ʼ����Ԫ�ص�n������ 
	for(vector<int>::size_type ix = 0; ix != v1.size(); ++ix)
		cout<<v4[ix]<<endl;//ֵ��� 
	cout<<endl;
 
	//p81 ��vector���Ԫ��
	string word;
	vector<string> text;
/* 
	while(cin>>word)  //==================bugs������������ʲô���� 
		text.push_back(word); 
	for(vector<int>::size_type ix = 0; ix != text.size(); ++ix)
		cout<<text[ix]<<endl;
	cout<<endl; 
*/
	
	//vector��������iterator
	vector<int>::iterator iter1 = v1.begin();
	   	cout<<*iter1<<endl;	
//	for(vector<int>::size_type ix = 0 ; ix != iter1.size(); ix++)
//		v1[ix] = 47;
 	for(vector<int>::iterator iter1 = v1.begin(); iter1 != v1.end() ; iter1++)
 		*iter1 = 47 ; 
	for(vector<int>::size_type ix = 0; ix != v1.size(); ++ix)
		cout<<v1[ix]<<endl;// ��ʾ��Ϣ
	//const_iteratorֻ�����ڶ�ȡ�����е����ݣ����ܸı���ֵ 
	for(vector<int>::const_iterator iter1 = v1.begin(); iter1 != v1.end() ; iter1++)
 		cout<<v1[ix]<<endl;//����*iter1 = 47 ;  
 		
	return 0 ;
}