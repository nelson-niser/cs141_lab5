#include<iostream>

using namespace std;

int main(){

	int a,b,c;

	cout<<"enter a number to check if it is divisible by 5 or 11"<<endl;
	cin>>a;
	
	//a/5 & a/11
	b=a%5;
	c=a%11;
	if(b==0){
		if(c==0){
		cout<<a<<" is divisible by 5 & 11"<<endl;}
	//a/5
		else{
		cout<<a<<" is divisible by 5 but not by 11"<<endl;}
	}
	else{
	//a/11	
		if(c==0){ cout<<a<<" is divisible by 11 but not by 5"<<endl;}
	//neither
		else{ cout<<a<<" is not divisible either by 5 or 11"<<endl;}

	}
	

return 0;

}
