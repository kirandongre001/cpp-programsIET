#include<iostream>
using namespace std;
int main(){
	int a,b,temp;
	cout<<"enter a";
	cin>>a;
	cout<<"enter b";
	cin>>b;
	cout<<" a and b before swap are "<<a<<" "<<b<<endl;
	temp = a;
	a=b;
	b=temp;
//	temp;
	cout<<"after swapping value of a and b are"<<a<<" "<<b;
}
