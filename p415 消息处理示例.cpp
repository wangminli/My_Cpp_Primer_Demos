#include <iostream>
#include <set>
#include <string>
class Message;
///////////////////////////////////////////
//类Folder
class Folder
{
public:
	Folder(){}
	Folder(const Folder&);
	~Folder();
	void save(Message&);
	void remove(Message&);
	void addMsg(Message*);
	void remMsg(Message*);
	Folder & operator=(const Folder &rhs);
private:
	std::set<Message*>messages;
	void put_Fldr_in_Messages(const std::set<Message*>&);
	void remove_Fldr_from_Messages();
};
//////////////////////////////////////////////////
//类Message
class Message
{
public:
	Message(const std::string &str= ""):
	  contents(str){}
	  Message(const Message &);
	  Message& operator=(const Message&);
	  ~Message();
	  void save(Folder&);
	  void remove(Folder&);
	  void addFldr(Folder*);
	  void remFldr(Folder*);
private:
	std::string contents;
	std::set<Folder*> folders;
	void put_Msg_in_Folders(const std::set<Folder*>&);
	void remove_Msg_from_Folders();
};
//////////////////////////////////////////
//类Folder实现部分
Folder::Folder(const Folder &f):messages(f.messages)
{
	put_Fldr_in_Messages(messages);
}
void Folder::put_Fldr_in_Messages(const std::set<Message*> &rhs)
{
	for(std::set<Message*>::const_iterator beg = rhs.begin();beg != rhs.end();++beg)
	{
		(*beg)->addFldr(this);
	}
}
Folder & Folder::operator=(const Folder &rhs)
{
	if (&rhs != this)
	{
		remove_Fldr_from_Messages(); //这里一定要移除message,因为如果只是覆盖的话,你并不知道对方的长度是不是和你的一样
		messages = rhs.messages;
		put_Fldr_in_Messages(rhs.messages);
	}
	return *this;
}
void Folder::remove_Fldr_from_Messages()
{
	for (std::set<Message*>::const_iterator beg = messages.begin();beg != messages.end();++beg)
	{
		(*beg)->remFldr(this);
	}
}
Folder::~Folder()
{
	remove_Fldr_from_Messages();
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
	messages.insert(msg);
}
void Folder::remMsg(Message* msg)
{
	messages.erase(msg);
}
//////////////////////////////////////////
//类Message实现部分
Message::Message(const Message &m):contents(m.contents),folders(m.folders)
{
	put_Msg_in_Folders(folders);
}
void Message::put_Msg_in_Folders(const std::set<Folder*>& rhs)
{
	for(std::set<Folder *>::const_iterator beg = rhs.begin();
	beg != rhs.end(); ++ beg)
	{
		(*beg)->addMsg(this);
	}
}
Message& Message::operator =(const Message &rhs)
{
	if (&rhs !=this)
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
	for (std::set<Folder*>::const_iterator beg =
		folders.begin(); beg != folders.end(); ++ beg)
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
    Message  msg1("new message !"); 
    Folder fldr1;
	msg1.save(fldr1) ;
    
    
	return 0;
}