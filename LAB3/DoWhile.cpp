#include<iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;
int main(){
	char ch,ch1;
	float len,bre,pm,area;
	do{
		cout<<"\n"<<"rectangle menu"<<endl;
		cout<<"\n1 Area";
		cout<<"\n2 Permieter";
		cout<<"\n3 Exit"<<"\n";
		cout<<"Enter your option = "<<endl;
		cin>>ch;
		if(ch=='1'||ch=='2'){
			cout<<"Enter Length  = "<<endl;
			cin>>len;
			cout<<"Enter Breadth = "<<endl;
			cin>>bre;
		}
	switch(ch)
	{
		case '1': area = len*bre;
				cout<<"area of rectangle is = "<<area<<endl;
		break;
		case '2': pm = 2*(len + bre);
				cout<<"perimeter of rectangle is = "<<pm<<endl;
		case '3': break;
		default: cout<<"Wrong Option Selected ";
		break;		
	}
	cout<<"press any key to continue"<<endl;
	ch1=getchar();
	}
	while (ch>='1'&&ch<='2');
}

