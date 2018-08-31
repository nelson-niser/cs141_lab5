#include<iostream>

using namespace std;

int main(){

 int a;
 cout<<"enter a number to check if it is positive, negative or zero"<<endl;
 cin>>a;
	//0
	if(a<0){
	cout<<"the entered number is negative"<<endl;}
	//-
	else if(a>0){
	cout<<"the entered number is positive"<<endl;}
	//+
	else{
	cout<<"the entered number is zero"<<endl;}

return 0;

}
