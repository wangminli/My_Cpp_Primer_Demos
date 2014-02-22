//vector的使用 
#include<iostream>
#include<vector>
using namespace std;
 

int main()
{
	//几种初始化方式
	vector<int>  v1;	//经验证，不可以使用“声明+复制”的方式赋值，即vector<int> v1.push_back(n) 的方式。 
	 //循环赋值 
    for(vector<int>::size_type ix = 0; ix != 10; ++ix)
    	v1.push_back(ix);
 	//显示信息 
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
	
	vector<int> v4(5);	//v4含有值初始化的元素的n个副本 
	for(vector<int>::size_type ix = 0; ix != v1.size(); ++ix)
		cout<<v4[ix]<<endl;//值随机 
	cout<<endl;
 
	//p81 向vector添加元素
	string word;
	vector<string> text;
/* 
	while(cin>>word)  //==================bugs：结束条件是什么？？ 
		text.push_back(word); 
	for(vector<int>::size_type ix = 0; ix != text.size(); ++ix)
		cout<<text[ix]<<endl;
	cout<<endl; 
*/
	
	//vector迭代器：iterator
	vector<int>::iterator iter1 = v1.begin();
	   	cout<<*iter1<<endl;	
//	for(vector<int>::size_type ix = 0 ; ix != iter1.size(); ix++)
//		v1[ix] = 47;
 	for(vector<int>::iterator iter1 = v1.begin(); iter1 != v1.end() ; iter1++)
 		*iter1 = 47 ; 
	for(vector<int>::size_type ix = 0; ix != v1.size(); ++ix)
		cout<<v1[ix]<<endl;// 显示信息
	//const_iterator只能用于读取容器中的内容，不能改变其值 
	for(vector<int>::const_iterator iter1 = v1.begin(); iter1 != v1.end() ; iter1++)
 		cout<<v1[ix]<<endl;//错误：*iter1 = 47 ;  
 		
	return 0 ;
}