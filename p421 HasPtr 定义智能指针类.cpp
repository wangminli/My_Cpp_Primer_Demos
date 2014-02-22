//p421 HasPtr 定义智能指针类 
# include <iostream>
using namespace std;

class U_Ptr {	//使用计数类 
	friend class HasPtr;
	int *ip;
	size_t use;
	U_Ptr(int *p) :	ip(p), use(1) {
		cout << "U_ptr constructor called !" << endl;
	}
	~U_Ptr() 
	{
		delete ip;
		cout << "U_ptr distructor called !" << endl;
	}
};

class HasPtr {		//指针类 
public:
	HasPtr(int *p, int i) :
		ptr(new U_Ptr(p)), val(i) {
		cout << "HasPtr constructor called ! " << "use = " << ptr->use << endl;
	}
	HasPtr(const HasPtr& orig) :
		ptr(orig.ptr), val(orig.val) {
		++ptr->use;
		cout << "HasPtr copy constructor called ! " << "use = " << ptr->use << endl;
	}
	HasPtr& operator=(const HasPtr&);
	~HasPtr() {
		cout << "HasPtr distructor called ! " << "use = " << ptr->use << endl;
		if (--ptr->use == 0)
			delete ptr;
	}
	int *get_ptr() const {
		return ptr->ip;
	}
	int get_int() const {
		return val;
	}
	void set_ptr(int *p) const {
		ptr->ip = p;
	}
	void set_int(int i) {
		val = i;
	}
	int get_ptr_val() const {
		return *ptr->ip;
	}
	void set_ptr_val(int i) {
		*ptr->ip = i;
	}
private:
	U_Ptr *ptr;
	int val;
};
HasPtr& HasPtr::operator =(const HasPtr &rhs) {     //注意，这里赋值操作符在减少做操作数的使用计数之前使rhs的使用技术加1，从而防止自我赋值
	++rhs.ptr->use;
	if (--ptr->use == 0)
		delete ptr;
	ptr = rhs.ptr;
	val = rhs.val;
	return *this;
}
int main() {
	int *pi = new int(0);
	HasPtr *hpa = new HasPtr(pi, 100);
	HasPtr *hpb = new HasPtr(*hpa);
	HasPtr *hpc = new HasPtr(*hpb);
	HasPtr hpd = *hpa;

	cout << hpa->get_ptr_val() << " " << hpb->get_ptr_val() << endl;
	hpc->set_ptr_val(10000);
	cout << hpa->get_ptr_val() << " " << hpb->get_ptr_val() << endl;
	hpd.set_ptr_val(10);
	cout << hpa->get_ptr_val() << " " << hpb->get_ptr_val() << endl;
	delete hpa;
	delete hpb;
	delete hpc;
	cout << hpd.get_ptr_val() << endl;
	return 0;
}
/*
U_ptr constructor called !
HasPtr constructor called ! use = 1
HasPtr copy constructor called ! use = 2
HasPtr copy constructor called ! use = 3
HasPtr copy constructor called ! use = 4
0 0
10000 10000
10 10
HasPtr distructor called ! use = 4
HasPtr distructor called ! use = 3
HasPtr distructor called ! use = 2
10
HasPtr distructor called ! use = 1
U_ptr distructor called !
请按任意键继续. . .
*/