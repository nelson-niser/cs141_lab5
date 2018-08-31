#include<iostream>

using namespace std;

int main(){

	int a,b;
	cout<<"enter a number to check whether it is even or odd"<<endl;
	cin>>a;
	
	b=a%2;
	//a is even
	if (b==0){
		cout<<a<<" is a even number"<<endl;}
	//a is odd
	else {
		cout<<a<< " is an odd number"<<endl;}




return 0;
}
