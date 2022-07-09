#include<iostream>
using namespace std;
int main(){
	int num,num_copy,rev=0,rem,c=0;
	cout<<"Enter a number\n";
	cin>>num;
	num_copy=num;
	while(num_copy!=0){
		rem=num_copy%10;
		rev=rev*10+rem;
		num_copy=num_copy/10;
	}
	cout<<"Reversed number is "<<rev<<endl;
	if(num==rev)
		cout<<"It is a palindrome";
	else
		cout<<"Not a palindrome";
return 0;
}