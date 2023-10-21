#include<iostream>
using namespace std;
int main(){
int p1[5];
int*p2[5];
cout<<"enter five no."<<endl;
for(int i=0;i<5;i++)
	cin>>p1[i];
	for(int i=0;i<5;i++)
	p2[i]=&p1[i];
cout<<"the values are \t"<<endl;
for(int i=0;i<5;i++)
cout<<*p2[i]<<endl;
cout<<sizeof (p1)<<endl;
cout<<sizeof (p2)<<endl;}
