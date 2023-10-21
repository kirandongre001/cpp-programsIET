// C++ program to implement
// pass-by-reference
#include <iostream>
using namespace std;

void f(int & x)
{
x--;
}
int main()
{
int a = 5;
cout << a << endl;
f(a);
cout << a << endl;
}

