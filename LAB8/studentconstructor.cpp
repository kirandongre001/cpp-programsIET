#include<iostream>
#include<string.h>
using namespace std;
class stu{
	int rolln;char name[50];double fee;
	public:
		stu(int,char[],double);
		stu(stu &t){
			rolln=t.rolln;
			strcpy(name,t.name);
			fee=t.fee;
		}		
		void show(){
			cout<<rolln<<"\t"<<name<<"\t"<<fee<<endl;
		}
};
stu::stu(int n,char q[], double f){
	rolln=n;
	strcpy(name,q);
	fee=f;
}
int main(){
	stu s(92,"shantanu",94400);
	stu s1(s);
	s.show();
	s1.show();
}
