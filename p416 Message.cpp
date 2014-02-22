//
#include <iostream>
#include <vector>
using namespace std; 

class Message
{
public:	
	Message(const string &str = ""):content(str){}		//构造函数 
	Message(const Message&);							//赋值构造函数 
	
	Message& operator =(const Message&);
	
	~Message();
	
	void save(Folder&);									//保存 
	void remove(Folders&);								//删除 
	
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
//===============运行结果==================

*/