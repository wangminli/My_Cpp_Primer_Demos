//
#include <iostream>
#include <vector>
using namespace std; 

class Message
{
public:	
	Message(const string &str = ""):content(str){}		//���캯�� 
	Message(const Message&);							//��ֵ���캯�� 
	
	Message& operator =(const Message&);
	
	~Message();
	
	void save(Folder&);									//���� 
	void remove(Folders&);								//ɾ�� 
	
private:
	string content;
	set<Folder*> folders;
	void put_Msg_in_Folders(const set<folders*>&);
	void remove_Msg_from_Fromers();	
} ;

int main()
{
	
		 
	return 0;
}
/*
//===============���н��==================

*/