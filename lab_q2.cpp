#include<iostream>

using namespace std;

int main(){

	int a,b,c;

	cout<<"enter three numbers to compare their values"<<endl;
	cin>>a;
	cin>>b;
	cin>>c;

	if(a>b){
		//c>a>b
		if(c>a){
			cout<<c<<" > "<<a<<" > "<<b<<endl;}
		//a>b>c
		else if(c<b){
			cout<<a<<" > "<<b<<" > "<<c<<endl;}
		//a>c>b
		else {
			cout<<a<<" > "<<c<<" > "<<b<<endl;}
		}

	else{
		//c>b>a
		if(c>b){
			cout<<c<<" > "<<b<<" > "<<a<<endl;}
		//b>a>c
		else if(c<a){
			cout<<b<<" > "<<a<<" > "<<c<<endl;}	
		//b>c>a
		else{
			cout<<b<<" > "<<c<<" > "<<a<<endl;}
	}




	return 0;

}
