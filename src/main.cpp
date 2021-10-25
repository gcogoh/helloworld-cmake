#include <iostream>
#include <vector>
#include <string>
#include "MyClass.h"

using namespace std;

int main(int argc, char** argv)
{
	vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!", "by CMake"};
	Object obj;
	obj.AddString("built");
	obj.AddString("program.");
	obj.DisplayVectorContents();
	msg.push_back(obj.GetCopyOfVector().at(0));
	msg.push_back(obj.GetCopyOfVector().at(1));

	for (const auto& word : msg)
	{
		cout << word << " ";
		cout << flush;
	}
	cout << endl;

	return 0;
}
