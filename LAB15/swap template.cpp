#include<iostream>
using namespace std;
template <class T >

T swap1(T* p ,T* q)
{
	T temp;
	temp=*p;
	*p=*q;
	*q=temp;
	cout<<"after swapping value of a and b are "<< *p <<" "<< *q <<endl;

}

int main()
{
	int a,b;
	cout<<"enter value of a";
	cin>>a;
	cout<<"enter value of b";
	cin>>b;
	cout<<"before swapping value of a and b are "<< a <<" "<< b <<endl;
	swap1(&a,&b);

}
