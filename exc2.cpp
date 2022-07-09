#include <iostream>
using namespace std;
typedef float salary;
int main(){
	salary net,basic,deduction,allowance;

	cout<<"Enter basic salary"<<endl;
	cin>>basic;
	cout<<"Enter percentage deduction"<<endl;
	cin>>deduction;
	cout<<"Enter percentage allowance"<<endl;
	cin>>allowance;

	net=basic+(basic*allowance/100)-(basic*deduction/100);
	cout<<"Net salary is: "<<net;

	return 0;
}