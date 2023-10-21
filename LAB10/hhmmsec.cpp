#include<iostream>
using namespace std;
class Time{
	int hour,minute,second;
	public:
		Date(int hr,int min,int sec){
			hour=hr;
			minute=min;
			second=sec;
		}
		friend void operator+(Time&,int);
		friend void operator-(Time&,int);
		void display(){
			cout<<"Time"<<hour<<":"<<minute<<":"<<second<<endl;
		}
};
void operator+(Time&x,int y){
	
	x.hour=x.hour+y;
	x.minute=x.minute+y;
	x.second=x.second+y;
}
void operator-(Time&x,int y){
	
	x.hour=x.hour-y;
	x.minute=x.minute-y;
	x.second=x.second-y;
}
int main(){
	int hr,min,sec;
	cout<<"enter hour"<<endl;
	cin>>hr;
	cout<<"enter minute"<<endl;
	cin>>min;
	cout<<"enter seconds"<<endl;
	cin>>sec;
	cout<<"You're entered Date is : "<<hr<<":"<<min<<":"<<sec<<endl;
	
	Time d(hr,min,sec);
	int t;
	cout<<"Set time";
	cin>>t;
	d+t;
	d.display();
	
	int q;
	cout<<"Set time ";
	cin>>q;
	d-q;
	d.display();
}
