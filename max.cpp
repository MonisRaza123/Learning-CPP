#include <iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter two numbers\n";
	cin>>a>>b>>c;
	if(a>b && a>c)
		cout<<"Maximum of the three numbers is "<<a;
	else if(b>c)
		cout<<"Maximum of the three numbers is "<<b;
	else
		cout<<"Maximum of the three numbers is "<<c;
	return 0;

}