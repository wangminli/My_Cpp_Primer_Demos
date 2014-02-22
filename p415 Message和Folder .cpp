//p415 Message和Folder 
#include <iostream>
#include <set>
#include <string>
using namespace std;

class Message;
//////////////////////////////////////////////////
//Folder类
class Folder
{
	public:
	Folder(){}
	Folder(const Folder&); 	//复制构造函数
	~Folder();
	
	void save(Message&);
	void remove(Message&);
	void addMsg(Message*);
	void remMsg(Message*);
	
	Folder& operator=(const Folder &rhs);
private:
	 set<Message*> messages;
	 void put_Fldr_in_Messages(set<Message*>&); 
	 void remove_Fldr_from_Messages();
} ;
///////////////////////////////////////////////////
//Message类
class Message 
{
public:
	Message(const string& str = ""):contents(str){}
	Message(const Message&);
	~Message();
	
	void save(Folder&);
	void remove(Folder&);
	void addFldr(Folder*);
	void remFldr(Folder*);
private:
	string contents;
	set<Folder*> folders;
	void put_Msg_in_Folders(const set<Folder*>&);
	void remove_Msg_from_Folders();	
} ;
///////////////////////////////////////////////
//Folder实现部分
Folder::Folder(const Folder &f):messages(f.messages) 
{
	put_Fldr_in_Messages(messages);
}
void Folder::put_Fldr_in_Messages(const set<Message*> &rhs)
{
	for(set<Message*>::const_iterator beg = rhs.begin(); beg != rhs.end(); ++beg) 
	{
		(*beg)->addFldr(this);
	}
}
Folder &Folder::operator=(const Folder &rhs)
{
	if(&rhs != this)
	{
		remove_Msg_from_Folders();
		messages = rhs.messages;
		put_Fldr_in_Messages(rhs.message);
	}
	return *this;
}
void Folder::remove_Msg_from_Folders
{
	for (set<Message*>::const_iterator beg = messages.begin(); beg != messages.end(); ++beg)
	{
		(*beg)->remFldr(this);
	} 
}
Folder::~Folder()
{
	remove_Msg_from_Folders();
}
void Folder::save(Message& msg)
{
	addMsg(&msg);
	msg.addFldr(this);
}
void Folder::remove(Message& msg)
{
	remMsg(&msg);
	msg.remFldr(this);
}
void Folder::addMsg(Message* msg)
{
	messages.erase(msg); 
} 
///////////////////////////////////////////////
//Messages类实现部分
 Message::Message(const Message &m):contents(m.contents),folders(m.folders)
 {
 	put_Fldr_in_Messages(folders);
 }
 void Message::put_Msg_in_Folders(const ser<Folder*> &rhs)
 {
 	for(set<Folder*>::const_iterator beg = rhs.begin(); beg != rhs.end(); ++beg)
 	{
	 	(*beg)->addMsg(this);
 	}
 }
 Message& Message::operator=(const Message &rhs)
 {
 	if(&rhs != this)
 	{
	 	remove_Msg_from_Folders();
	 	contents = rhs.contents;
	 	folders = rhs.folders;
	 	put_Msg_in_Folders(rhs.folders);
 	}
 	return *this;
 }
 void Message::remove_Msg_from_Folders()
 {
 	for(set<Folder*>::const_iterator beg = folders.begin(); beg != folder.end(); ++beg)
 	{
	 	(*beg)->remMsg(this);
	 }
 }
 Message::~Message()
 {
 	remove_Msg_from_Folders();
 }
 void Message::save(Folder& fldr)
 {
 	addFldr(&fldr);
 	fldr.addMsg(this);
 }
 void Message::remove(Folder& fldr)
 {
 	remFldr(&fldr);
 	fldr.remMsg(this);
 }
 void Message::addFldr(Folder* fldr)
 {
 	folders.insert(fldr);
 }
 void Message::remFldr(Folder* fldr)
 {
 	folders.erase(fldr);
 }
 
 int main()
 {
 	return 0;
 } 