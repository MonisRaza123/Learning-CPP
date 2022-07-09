#include <iostream>
using namespace std;
int g=9; //global variable
void fun(){
	static int v=0; //static variable
	int a =10; //local variable
	v++;
	a++;
	g++;
	cout<<a<<" "<<v<<" "<<g<<endl;
}

int main()
{   cout<<"lo st gl"<<endl;
	fun();
	fun();
	fun();
	return 0;
}