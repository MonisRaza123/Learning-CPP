#include<iostream>
using namespace std;
int main(){
    float amt,disc;
	cout<<"Enter the billing amount: "<<endl;
	cin>>amt;
	if(amt<100){
		cout<<"No discount applicable";
	}
	else if(amt>=100&&amt<500){
		disc=(amt*10)/100;
	}
	else{
		disc=(amt*20)/100;
	}
	cout<<"The discount on your bill is: "<<disc<<endl;
	cout<<"Discounted price is: "<<amt-disc;
 return 0;
}