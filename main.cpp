#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(int argc, char** argv)
{
	vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!", "by CMake"};

	for (const string& word : msg)
	{
		cout << word << " ";
		cout << flush;
	}
	cout << endl;

	return 0;
}
