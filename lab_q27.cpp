#include<iostream>
using namespace std;
int main(){

int a,b,c;
cout<<"enter a number to find sum of all natural numbers upto that no"<<endl;
cin>>a;
b=1;
c=0;
while(b<=a){
c=b+c;
b++;
}
cout<<c<<endl;

return 0;
}
