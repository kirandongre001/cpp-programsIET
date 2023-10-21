#include<iostream>
#include<math.h>
using namespace std;
const float r= 6.5;
int main(){
	int p,n,t;
	float A,b;
	cout<<"enter principle amt";
	cin>>p;
	cout<<"enter time";
	cin>>t;
	cout<<"No of time interest is compounded";
	cin>>n;
	A= p*pow((1+r/n*100),n*t);
	b=A-p;
	cout<< "Amount = "<<b;
	
	
}
