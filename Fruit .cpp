//Fruit 
#include <string>
#include <iostream>
using namespace std;
class Fruit               //����һ���࣬���ֽ�Fruit
{
	 string name;     //����һ��name��Ա           
	 string colour;   //����һ��colour��Ա
 
public:
 bool isSame(const Fruit &otherFruit)   //�ڴ����β�����һ��Fruit����󣬲����Ƿ�ͬ��
 {
 	 return name == otherFruit.name;
 }
 void print()              //����һ��������ֵĳ�Աprint()
 {
 	 cout<<colour<<" "<<name<<endl;
 }
 
 Fruit(const string &nst,const string &cst = "green"):name(nst),colour(cst){}  //���캯��
 
 Fruit(){}

};

int main()
{
 Fruit apple("apple");
 Fruit orange("orange");
 cout<<"apple = orange ?: "<<apple.isSame(orange)<<endl;  //û�����⣬�϶���ͬ
 cout<<"apple = apple ?:"<<apple.isSame(string("apple")); //��һ��string���βΣ�
 
    return 0;
}