#include<iostream>
using namespace std;
class complex{
	int real,img;
	public:
		complex();
		complex(int,int);
		void display();
		complex operator+(complex&);
		complex operator-(complex&);
		complex operator++();
		complex operator++(int);
		complex operator--();
		complex operator--(int);
		friend void operator<<(ostream&out,const complex&d);
		friend void operator>>(istream&in,complex&d);
};
complex::complex(){
	this->real=this->img=0;
}
complex::complex(int r,int i){
	real=r;
	img=i;	
}
void complex::display(){
	if(img>0)
		cout<<"complex no. is"<<real<<"+"<<img<<"i"<<endl;
	else
		cout<<"complex no. is"<<real<<"-"<<img<<"i"<<endl;
}
complex complex::operator+(complex&A){
	complex a;
	a.real=this->real+A.real;
	a.img=this->img+A.img;
	return a;
}
complex complex::operator-(complex&A){
	complex a;
	a.real=this->real-A.real;
	a.img=this->img-A.img;
	return a;
}
complex complex::operator++(int){
	
	complex b=*this ;
	++this->real;
	++this->img;
	return b;
}
complex complex::operator++(){
	
	++this->real;
	++this->img;
	return *this;
}
complex complex::operator--(int){
	
	complex c=*this ;
	--this->real;
	--this->img;
	return c;
}
complex complex::operator--(){
	
	--this->real;
	--this->img;
	return *this;
}

void operator<<(ostream&out,const complex&d){
	out<<d.real;
	out<<"+"<<d.img<<"i"<<endl;
}
void operator>>(istream&in,complex&d){
	cout<<"enter real part"<<endl;
	in>>d.real;
	cout<<"enter img part"<<endl;
	in>>d.img;
}

int main(){
	complex c1(1,2);
	complex c2(2,1);
	complex c3;
	c3=c1+c2;
	c3.display();
	
	complex c4(1,2);
	complex c5(2,1);
	complex c6;
	c6=c4-c5;
	c6.display();
	
	complex c7(1,2);
	complex c8;
	c8=c7++;
	c8.display();
	
	complex c9(1,2);
	complex c10;
	c10=++c9;
	c9.display();
	
	complex c11(1,2);
	complex c12;
	c12=c11--;
	c12.display();
	
	complex c13(1,2);
	complex c14;
	c14=--c13;
	c14.display();
	
	complex c15;
	cin>>c15;
	cout<<"COMPLEX NO. IS";
	cout<<c15;
}
