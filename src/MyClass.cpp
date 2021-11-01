#include <iostream>
#include <vector>
#include <string>
#include <boost/range/adaptor/indexed.hpp>
#include "MyClass.h"

using namespace std;

Object::Object()
{}

Object::~Object()
{}

void Object::AddString(string vs)
{
	m_VectorOfString.push_back(vs);
}

vector<string> Object::GetCopyOfVector()
{
	return m_VectorOfString;
}

void Object::DisplayVectorContents()
{
	//#include <boost/range/adaptor/indexed.hpp>
	for (const auto&& word : m_VectorOfString | boost::adaptors::indexed())
	{
		cout << "Element[" << word.index() << "] =" << word.value() << endl;
	}
	cout << endl;
}
