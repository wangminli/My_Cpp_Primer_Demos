//p489 �����ൽ����ת���Ŀɷ����� 
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
    pb = new B;    	// ��ȷ public����������ת��[*B ---> *A].
    pc = new C; 	// ���� protected����������ת��[*C -\-> *A].
    pd = new D; 	// ���� private����������ת��[*D -\-> *A].
    pe = new E; 	// ��ȷ public���������࣬����ת��[*E ---> *A].
    pf = new F; 	// ����(��������˼����ȷ����VC�����Ǵ���)protected����������.
    pg = new G; 	// ���� private���������࣬����ת��[*G -\-> *A].
    
    return 0; 
}

/*==========���н��============

*/