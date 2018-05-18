#include<list>
#include<iterator>
#include<iostream>
#include<string>
#ifndef DATA_H
#define DATA_H
using namespace std;


class Data{
	private:
		string name;
		string url;
		list <string> tags;
	public:
		Data(string names, string urls, list <string> tag);
		string getName();
		string getUrl();
		list <string> getTag();
};

Data::Data(string names, string urls, list <string> tag):
	name(names),
	url(urls),
	tags(tag)
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

#endif
