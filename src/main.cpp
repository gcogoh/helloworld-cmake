/**
 * @file helloworld.cpp
 * @brief VSCode template
 * @author gcogoh@users.noreply.github.com
 * @date 2020/08/08 create
 */
#include <iostream>
#include <vector>
#include <string>
#include "MyClass.h"

using namespace std;

int main(int argc, char** argv)
{
	vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!", "by CMake"};
	Object obj;
	for (const auto& word : {"built", "program."})
	{
		obj.AddString(word);
	}
	obj.DisplayVectorContents();
	auto objStr = obj.GetCopyOfVector();	// to reserve same vector& of GetCopyOfVector()
	msg.insert(msg.end(), objStr.begin(), objStr.end());

	for (const auto& word : msg)
	{
		cout << word << " ";
		cout << flush;
	}
	cout << endl;

	return 0;
}