//p399 B �����˻��� 
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
	
	static void rate(double);		//static |���� 

	
private:
	string owner;
	double amount;
	static double interestRate ;		//static
	static double initRate();			//static
	static const int period /*=30 */ ; 		//��������¿��������г�ʼ��static��Ա 
};
/*static����д�ڶ��崦*/ void Account::rate(double newRate)
{
	interestRate = newRate;
}

double Account::interestRate =0; //initRate();	//static���ݳ�Ա������������г�ʼ�� 
const int Account::period = 30;			//����period 
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
//===============���н��==================

*/