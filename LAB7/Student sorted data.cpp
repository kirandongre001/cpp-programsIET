#include <iostream>     
using  namespace std;  
#include<string.h>
class date
{
	int dd,mm,yy;
	public:
		void get()
		{
			cout<<"enter date\n";
			cin>>dd>>mm>>yy;
		}
		void put()
		{
			cout<<"date is "<<dd<<"/"<<mm<<"/"<<yy<<endl;
		}
};
class student
{
	int rollno;
	char name[10];
	int marks[5];
	date d;
	
	public:
		void get()
		{
			cout<<"enter rollno\n";
			cin>>rollno;
			cout<<"enter student name\n";
			cin>>name;
			cout<<"Enter Student Marks\n";
			for(int i=0;i<5;i++)
			{
				cin>>marks[i];
			}
			
			d.get();
		}
		void put()
		{	
			int sum=0;
			cout<<rollno<<"\t"<<name<<"\t"<<endl;
			for(int i=0;i<5;i++)
			{
				 sum=sum+marks[i];
			}
			int avg=sum/5;
			cout<<"\tAvrage Of Student "<<avg;
			
			d.put();
		}
		int getrollno()
		{
			return rollno;
		}
		char* getname()
		{
			return name;
		}
		void setrollno(int r)
		{
			rollno=r;
		}
		void setname(char* n)
		{
			strcpy(name,n);
		}
		
		
};
int main()
{
	student s[10],temp;
	int i,n,j;
	cout<<"enter value of n\n";
	cin>>n;
	for(i=0;i<n;i++)
	{
		s[i].get();
		
	}
	for(i=0;i<n;i++)
	{
		s[i].put();
		
	}
	cout<<"sort information\n";
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(s[i].getrollno()>s[j].getrollno())
			{
				temp=s[i];
				s[i]=s[j];
				s[j]=temp;
			}
			
		}
	}
	for(i=0;i<n;i++)
	s[i].put();
}
