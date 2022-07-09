#include <iostream>
using namespace std;

class rational{
private:
	int num;
	int den;

public:
	rational(int n=0,int d=1){
		num=n;
		den=d;
	}

	rational operator +(rational r){
		rational temp;
		temp.num=(num*r.den)+(r.num*den);
		temp.den=den*r.den;
		return temp;
	}
	friend ostream& operator <<(ostream &Out, rational &r);
};


ostream& operator <<(ostream &Out, rational &r){
	Out<<r.num<<"/"<<r.den;
	return Out;
}
int main(){

	rational r1(3,4);
	rational r2(2,3);
	rational sum=r1+r2;
	cout<<"sum of "<<r1<<" and "<<r2<<" is "<<sum;
	return 0;
    
}