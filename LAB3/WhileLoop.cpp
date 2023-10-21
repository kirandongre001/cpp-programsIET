#include<iostream>
using namespace std;
int main(){
	int i,num,fact=1;
	cout<<"enter a number = ";
	cin>>num;
	i=num;
	while(num){
		fact *=num;
		--num;
	}
	cout<<"Factorial of given number "<< i <<" is "<<fact<<endl;
}
