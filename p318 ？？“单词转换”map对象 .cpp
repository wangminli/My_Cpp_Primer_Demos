//p318 “单词转换”map对象 
/*
** Copyright (C) WWQ All rights reserved.
*/
#include <map>
#include <stdexcept>
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;
//open_file() 函数
ifstream & open_file(ifstream& in, const string& file)
{
	in.close();
	in.clear();
	in.open(file.c_str());
	return in;
}
//单词转换程序
int main(int argc, char** argv)
{
	map<string, string> trans_map;
	string key, value;
	if (argc != 3)
	{
		throw runtime_error("wrong number of arguments");
	}
	ifstream map_file;
	if (!open_file(map_file, argv[1]))
	{
		throw runtime_error("no transformation file");
	}
	while (map_file >> key >> value)
	{
		trans_map.insert(make_pair(key, value));
	}
	ifstream input;
	if (!open_file(input, argv[2]))
	{
		throw runtime_error("no input file");
	}
	string line;
	while (getline(input, line))
	{
		istringstream stream(line);
		string word;
		bool first_word = true;
		while(stream >> word)
		{
			map<string, string>::const_iterator map_it = trans_map.find(word);
			if (map_it != trans_map.end())
			{
				word = map_it->second;
			}
			if (first_word)
			{
				first_word = false;
			}
			else
			{
				cout << "  ";
			}
			cout << word;
		}
		cout << endl;
	}
	return 0;
}
