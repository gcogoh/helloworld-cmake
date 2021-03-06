#include <iostream>
#include <vector>
#include <string>
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
	//for (auto word : m_VectorOfString)
	//{
	//	cout << "Element[" << word.index() << "] = << word << endl;
	//}
	for (unsigned int i = 0; i < m_VectorOfString.size(); i++)
	{
		cout << "Element[" << i << "] = " << m_VectorOfString[i] << endl;
	}
	cout << endl;
}
