#ifndef SALESITEM_H
#define SALESITEM_H

#include <iostream>
#include <string>
using namespace std;

class Sales_item {
friend bool operator==(const Sales_item&, const Sales_item&);

public:
	//构造函数 
    Sales_item(const std::string &book):
		isbn(book), units_sold(0), revenue(0.0) { }
    Sales_item(std::istream &is) { is >> *this; }
    
    //操作符重载 
    friend std::istream& operator>>(std::istream&, Sales_item&);
    friend std::ostream& operator<<(std::ostream&, const Sales_item&);
    Sales_item& operator+=(const Sales_item&);
    
     
    double avg_price() const; 
    bool same_isbn(const Sales_item &rhs) const		
        { return isbn == rhs.isbn; }

    Sales_item(): units_sold(0), revenue(0.0) { }

//private:
    std::string isbn;
    unsigned units_sold;
    double revenue;

};

Sales_item operator+(const Sales_item&, const Sales_item&);

inline bool operator==(const Sales_item &lhs, const Sales_item &rhs)
{
    return lhs.units_sold == rhs.units_sold &&
           lhs.revenue == rhs.revenue &&
	   lhs.same_isbn(rhs);
}

inline bool operator!=(const Sales_item &lhs, const Sales_item &rhs)
{
    return !(lhs == rhs); 
}

using std::istream; using std::ostream;

inline Sales_item& Sales_item::operator+=(const Sales_item& rhs) 
{
    units_sold += rhs.units_sold; 
    revenue += rhs.revenue; 
    return *this;
}

inline Sales_item operator+(const Sales_item& lhs, const Sales_item& rhs) 
{
    Sales_item ret(lhs);
    ret += rhs;
    return ret;
}

inline istream& operator>>(istream& in, Sales_item& s)
{
    double price;
    in >> s.isbn >> s.units_sold >> price;
    if (in)
        s.revenue = s.units_sold * price;
    else 
        s = Sales_item();
    return in;
}

inline ostream& operator<<(ostream& out, const Sales_item& s)
{
    out << s.isbn << "\t" << s.units_sold << "\t" 
        << s.revenue << "\t" <<  s.avg_price();
    return out;
}

inline double Sales_item::avg_price() const
{
    if (units_sold) 
        return revenue/units_sold; 
    else 
        return 0;
}

//===================main函数====================== 
int main()
{
	Sales_item empty;
	Sales_item primer_3rd_Ed("01-201-82470-1"); 
	cout << primer_3rd_Ed.isbn <<endl; //run: 01-201-82470-1

	Sales_item item;
	string null_book = "9-999-99999-9";
	item.same_isbn(null_book);
	
	return 0;
}

#endif
