//p412 Q 合成的赋值操作符-没有执行我写的赋值操作符 
#ifndef SALESITEM_H
#define SALESITEM_H

#include <iostream>
#include <string>
using namespace std;

class Sales_item {
friend bool operator==(const Sales_item&, const Sales_item&);

public:
	//构造函数 
    Sales_item(const std::string &book):isbn(book), units_sold(0), revenue(0.0) { }
  //  Sales_item(std::istream &is) { is >> *this; }
    Sales_item(): units_sold(0), revenue(0.0) { }

	//合成赋值操作符 
	Sales_item& Sales_item::operator=(const Sales_item &rhs)
	{
		isbn = rhs.isbn;
		units_sold = rhs.units_sold + 1;	//耍耍编译器 
		revenue = rhs.units_sold;			//故意写错的 
		
		return * this ;
	} 
	
//private:
    std::string isbn;
    unsigned units_sold;
    double revenue;

};

//===================main函数====================== 
int main()
{
	Sales_item  rhs1;
	rhs1.isbn = "C++ Primer 4ed";
	rhs1.units_sold = 30;
	rhs1.revenue =20;
	
	Sales_item rhs2 ;
	rhs2 = rhs1;
//	Sales_item rhs3 = rhs1; //初始化，这样不会调用赋值操作符 
	int i = 0;
	cout << rhs2 .isbn << " " << rhs2.units_sold << "  " << rhs2.revenue << endl;
	
	
	return 0;
}

#endif
/*
mer 4ed 30  30
*/