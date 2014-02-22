//p489 派生类到基类转换的可访问性 
#include<iostream>
using namespace std;

class A{};

class B:public A{};
class C:protected A{};
class D:private A{};

class E:public B{};
class F:public C{};
class G:public D{};

int main(){
    A *pb, *pc, *pd, *pe, *pf, *pg;
    pb = new B;    	// 正确 public派生，可以转换[*B ---> *A].
    pc = new C; 	// 错误 protected派生，不可转换[*C -\-> *A].
    pd = new D; 	// 错误 private派生，不可转换[*D -\-> *A].
    pe = new E; 	// 正确 public派生的子类，可以转换[*E ---> *A].
    pf = new F; 	// 错误(按话的意思是正确，但VC编译是错误)protected派生的子类.
    pg = new G; 	// 错误 private派生的子类，不可转换[*G -\-> *A].
    
    return 0; 
}

/*==========运行结果============

*/