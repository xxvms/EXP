#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
	argc = 0;

	for (int i = 0; i < argc; i++)
	{
		cout << "hello " << argv[i]; // << argv[2] << endl;
	}
	cin.get();
	cout << endl;
	return 0;
}