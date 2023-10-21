#include<iostream>
using namespace std;
 class date1
 {
 	int d,m,y;
 	public:
 		date1()
 		{
 			d=m=y=0;
		 }
		 date1(int d,int m,int y)
		 {
		 	this->d=d;
		 	this->m=m;
		 	this->y=y;
		 }
		 void display()
		 {
		 	cout<<"date is :" <<d<<"/"<<m<<"/"<<y<<endl;
		 }
		 friend void operator+(date1 &, int );
		 friend void operator-(date1 &, int );
 };
 void operator+(date1 &d, int y)
 {
 	d.d=d.d+y;
 	d.m=d.m+y;
 	d.y=d.y+y;
 	cout<<"date is :" <<d.d<<"/"<<d.m<<"/"<<d.y<<endl;
 }
  void operator-(date1 &d, int y)
 {
 	d.d=d.d-y;
 	d.m=d.m-y;
 	d.y=d.y-y;
 	cout<<"date is :" <<d.d<<"/"<<d.m<<"/"<<d.y<<endl;
 }
 int main()
 {
 	date1 d1(10,2,2023);
 	d1+2;
 	d1-3;
 }
