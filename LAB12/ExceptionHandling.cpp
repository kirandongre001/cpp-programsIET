#include<iostream>
using namespace std;
float division (int x,int y)
{
	if(y==0)
	{
		throw "Attempted to divide By Zero";
	}
	
	return(x/y);
}
int main()
{
	int i=25;
	int j=0;
	float k=0;
	try
	{	
		k=division(i,j);
		cout<<k;
	}
	catch(const char* e) 
	{
		cout<<e;
	}
}
