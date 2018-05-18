#include<list>
#include<iterator>
#include<iostream>
#include<string>
#ifndef DATA_H
#define DATA_H
#endif
using namespace std;
using namespace stdin;


class Data{
	private:
		string name;
		string url;
		list <String> tags;
	public:
		string getName();
		string getUrl();
		string getTag();
};

Data::Data(string names, string urls, list <string> tag):
	name(names),
	url(urls),
	tags(tag)
{}

Data::~Data()
{}

string Data::getName()
{
	return name;
}

string Data::getUrl()
{
	return url;
}

list <string> Data::getTag()
{
	return tags;
}
