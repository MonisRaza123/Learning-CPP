//program to demonstrate pointer to function
//implements run time polymorphism
#include <iostream>
using namespace std;

int max(int a,int b){
	return (a>b?a:b);
}

int min(int a,int b){
	return(a<b?a:b);
}

int main(){
 int (*fp)(int,int);//DECLARATION
 fp=max;//INITIALISATION
 cout<<"max is "<<(*fp)(2,3)<<endl;//CALLING
 fp=min;//RE-INITIALISATION
 cout<<"min is "<<(*fp)(2,3);//CALLING
}
