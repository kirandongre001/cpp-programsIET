#include<iostream>
using namespace std;
template<class T>


T add( T a, T b)
{
	T result=a+b;
	return result;
}
template<class X , class Y>

float add1(X a , Y b)    // this function is type of Y so result will be in float
{
	Y result = a+b;
	return result;
}
int main()
{
	int i=2;
	int j=3;
	float m=2.3;
	float n=1.2;
	cout<<" Addition of i and j is : "<<add(i,j);
	cout<<"\n";
	cout<<" Addition of m and n is :"<<add(m,n)<<endl;
	
	cout<<"Addition of float and int: "<<add1(5,2.5);
	
	return 0;
}
