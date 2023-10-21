#include<iostream>
using namespace std;
class complex{
	int real,img;
	public:
		complex(int,int);
		void show()
		{
		cout<<real<<"+"<<img<<"i"<<endl;
		}
};
complex::complex(int r,int i)
{
	real=r;
	img=i;
}
int main(){
	complex c1(1,2);
	c1.show();
	complex c2(c1);
	c2.show();
}
