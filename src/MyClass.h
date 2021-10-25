#ifndef OBJECT_H
#define OBJECT_H

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Object
{
	public:
		Object();
		~Object();
		void AddString(string vs);
		vector<string>  GetCopyOfVector();
		void DisplayVectorContents();
	private:
		vector<string> m_VectorOfString;
};

#endif//OBJECT_H
