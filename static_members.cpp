#include <iostream>
using namespace std;

class Test{
public:
	int a;
	//static data member
	static int count;

	Test(){
		a=10;
		count++;
	}
	//static member function
	static int getcount(){
		return count;
	}
};
//defined again using scope resolution
int Test::count=0;


int main(){
	Test t1,t2;
	cout<<"Accessing using object1:     "<<t1.count<<endl;
	cout<<"Accessing using class name: "<<Test::count<<endl;
	cout<<"Accessing using object2:     "<<t2.count<<endl;
	cout<<"Accessing using class name: "<<Test::count<<endl;
	//changed the value of count using t1
	t1.count=25;
	//change gets reflected in the value of count for object t2 as well
	cout<<"calling static member function using object "<<t2.getcount()<<endl;
	cout<<"calling static member function using object "<<Test::getcount()<<endl;
	return 0;
}
