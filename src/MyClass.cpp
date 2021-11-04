#include <iostream>
#include <vector>
#include <string>
#include <boost/range/adaptor/indexed.hpp>	// index(), value()
#include <boost/assign.hpp>					//  +=  instead of push_bak()
#include "MyClass.h"

using namespace std;

Object::Object()
{}

Object::~Object()
{}

void Object::AddString(string vs)
{
	//#include <boost/assign.hpp>
	using namespace boost::assign;
	m_VectorOfString += vs;
}

vector<string> Object::GetCopyOfVector()
{
	return m_VectorOfString;
}

void Object::DisplayVectorContents()
{
	//#include <boost/range/adaptor/indexed.hpp>
	using namespace boost::adaptors;
	for (const auto&& word : m_VectorOfString | indexed())
	{
		cout << "Element[" << word.index() << "] =" << word.value() << endl;
	}
	cout << endl;
}
