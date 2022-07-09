#include <iostream>
using namespace std;

class complex{
	
public:
	int real;
	int img;
	complex(int r=0, int i=0){
		real=r;
		img=i;
	}
	friend complex operator +(complex c1, complex c2);
};

complex operator +(complex c1, complex c2){
	complex temp;
	temp.real=c1.real+c2.real;
	temp.img=c1.img+c2.img;
	return temp;
}

int main(){
	cout<<"Enter real and imaginary parts of 1st complex number:"<<endl;
	int a1,b1,a2,b2;
	cin>>a1>>b1;
	cout<<"Enter real and imaginary parts of 2nd complex number:"<<endl;
	cin>>a2>>b2;
	complex c1(a1,b1);
	complex c2(a2,b2);
	complex *c3=new complex();
	*c3=c1+c2;
	cout<<"The sum of two complex numbers is: "<<c3->real<<"+"<<c3->img<<"i";

}