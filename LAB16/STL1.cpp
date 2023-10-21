#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<char> z;
	z.push_back('R');
	z.push_back('A');
	z.push_back('N');
	z.push_back('C');
	z.push_back('H');
	z.push_back('O');
	
	
	for (int i=0;i<z.size();i++){
		cout<<z[i];
	}z.pop_back();
}
