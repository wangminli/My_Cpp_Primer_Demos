//p399 B 银行账户类 
#include <iostream>
using namespace std;

class Account 
{
public:
	void applyint()
	{
		amount += amount*interestRate;
	}
	
	static double rate()			//static 
	{
		return interestRate;
	}
	
	static void rate(double);		//static |声明 

	
private:
	string owner;
	double amount;
	static double interestRate ;		//static
	static double initRate();			//static
	static const int period /*=30 */ ; 		//这种情况下可以在类中初始化static成员 
};
/*static不能写在定义处*/ void Account::rate(double newRate)
{
	interestRate = newRate;
}

double Account::interestRate =0; //initRate();	//static数据成员必须在类外进行初始化 
const int Account::period = 30;			//定义period 
int main()
{
	Account ac1;
	Account *ac2 = &ac1;
	double rate;
	rate = ac1.rate();
	rate = ac2->rate();
	rate = Account::rate();

		 
	return 0;
}
/*
//===============运行结果==================

*/