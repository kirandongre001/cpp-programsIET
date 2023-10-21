#include<iostream>
using namespace std;
template<class T , int size>
class A
{   public:
	T arr[size];
	void get_array()
	{
		
		cout<<"Enter no\n";
		for(int i = 0;i<size;i++)
		{
			cin>>arr[i];
		}
		
	}
	
	void display()
	{
		 cout <<"Your array\n";
		for(int i = 0;i<size;i++)
		{
			cout<<arr[i]<<endl;
		}
	}
	
	void Bubble_sort()
	{
			int temp;

	
	for(int i = 0;i<size;i++)
	{
		for (int j = 0; j<size-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
			temp = arr[j];
			arr[j]	 = arr[j+1];
			arr[j+1] = temp;
			}
		}
	}
	 
	 cout<<"Sorted array\n";
	for(int i = 1;i<size+1;i++)
	{   cout<<endl;
	
		cout<<arr[i];
	}
	}
};


int main()
{
	  A<int,5> t1;  
	  t1.get_array();
	  t1.display();
	  t1.Bubble_sort();
	  

}
