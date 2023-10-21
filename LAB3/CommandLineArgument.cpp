#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	cout<<"enter an argc = ";
	cin>>argc;
	cout << "You have entered " << argc << " arguments:"<< "\n";
	for (int i = 0; i <=argc; i++)
	{
		cin>>(argv[i]);
		cout<<"r";
	}
	return 0;
}
