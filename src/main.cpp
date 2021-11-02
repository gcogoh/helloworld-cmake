/**
 * @file helloworld.cpp
 * @brief VSCode template
 * @author gcogoh@users.noreply.github.com
 * @date 2020/08/08 create
 */
#include <iostream>
#include <vector>
#include <string>
#include <boost/assign.hpp>					//  +=  instead of push_bak()
#include "MyClass.h"

using namespace std;

int main(int argc, char** argv)
{
	vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!", "by CMake"};
	#if 0
	using namespace boost::assign;
	msg += "built", "program.";
	#else
	Object obj;
	for (const auto& word : {"built", "program."})
	{
		obj.AddString(word);
	}
	obj.DisplayVectorContents();
	auto objStr = obj.GetCopyOfVector();	// to reserve same vector& of GetCopyOfVector()
	msg.insert(msg.end(), objStr.begin(), objStr.end());
	#endif

	for (const auto& word : msg)
	{
		cout << word << " ";
		#ifdef __GNUC__
		cout << flush;
		#endif//__GNUC__
	}
	cout << endl;

	return 0;
}