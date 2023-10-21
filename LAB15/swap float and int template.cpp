#include<iostream>
using namespace std;
template <class T1 , class T2 >

T2 swap1(T1* p ,T2* q)
{
	T2 temp;
	temp=*p;
	*p=*q;
	*q=temp;
	cout<<"after swapping value of a and b are "<< *p <<" "<< *q <<endl;

}

int main()
{   
int a;
	float b;
	cout<<"enter value of a";
	cin>>a;
	cout<<"enter value of b";
	cin>>b;
	cout<<"before swapping value of a and b are "<< a <<" "<< b <<endl;
	swap1(&a,&b);

}
