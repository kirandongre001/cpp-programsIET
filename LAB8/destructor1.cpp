#include<iostream>
#include<string.h>
using namespace std;
class str1{
	int len;char*ptr;
	public:
		str1(char*);
		void stringdisplay();
		~ str1();
};
void str1::stringdisplay()
{
	cout<<"len is"<<len<<endl;
	cout<<"string is"<<ptr<<endl;
}
str1::str1(char*sptr){
	len=strlen(sptr);
	ptr=new char[len+1];
	strcpy(ptr,sptr);
}
str1::~str1(){
	cout<<"destructor called \n";
	if(ptr)
	delete[] ptr;
	ptr = NULL;
}
int main()
{
	str1 c("ram");
	c.stringdisplay();
	{
		str1 c1(c);
		c1.stringdisplay();
		c1.~str1();
	}
	c.stringdisplay();
}
