//Fruit 
#include <string>
#include <iostream>
using namespace std;
class Fruit               //定义一个类，名字叫Fruit
{
	 string name;     //定义一个name成员           
	 string colour;   //定义一个colour成员
 
public:
 bool isSame(const Fruit &otherFruit)   //期待的形参是另一个Fruit类对象，测试是否同名
 {
 	 return name == otherFruit.name;
 }
 void print()              //定义一个输出名字的成员print()
 {
 	 cout<<colour<<" "<<name<<endl;
 }
 
 Fruit(const string &nst,const string &cst = "green"):name(nst),colour(cst){}  //构造函数
 
 Fruit(){}

};

int main()
{
 Fruit apple("apple");
 Fruit orange("orange");
 cout<<"apple = orange ?: "<<apple.isSame(orange)<<endl;  //没有问题，肯定不同
 cout<<"apple = apple ?:"<<apple.isSame(string("apple")); //用一个string做形参？
 
    return 0;
}