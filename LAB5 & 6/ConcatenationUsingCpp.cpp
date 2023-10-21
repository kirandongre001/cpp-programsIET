
#include<iostream>
#include <string.h>
using namespace std;


int main()
{
	char init[] = "Hello";
	char add[] = " World";

	
	strcat(init, add);

	cout << init << endl;

	return 0;
}

