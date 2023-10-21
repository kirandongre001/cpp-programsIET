#include<iostream>
using namespace std;
class Date{
	int day,month,year;
	public:
		Date(int d,int m,int y){
			day=d;
			month=m;
			year=y;
		}
		friend void operator+(Date&,int);
		friend void operator-(Date&,int);
		void display(){
			cout<<"Date"<<day<<"/"<<month<<"/"<<year<<endl;
		}
};
void operator+(Date&x,int y){
	
	x.day=x.day+y;
	x.month=x.month+y;
	x.year=x.year+y;
}
void operator-(Date&x,int y){
	
	x.day=x.day-y;
	x.month=x.month-y;
	x.year=x.year-y;
}
int main(){
	int dd,mm,yy;
	cout<<"enter date"<<endl;
	cin>>dd;
	cout<<"enter month"<<endl;
	cin>>mm;
	cout<<"enter year"<<endl;
	cin>>yy;
	cout<<"You're entered Date is : "<<dd<<"/"<<mm<<"/"<<yy<<endl;
	Date d(dd,mm,yy);
	
	int t;
	cout<<"Set date you wanna go ";
	cin>>t;
	d+t;
	d.display();
	
	int q;
	cout<<"Set date you wanna go ";
	cin>>q;
	d-q;
	d.display();
}
