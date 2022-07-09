#include <iostream>
using namespace std;

class advance_car{
public:
	void start(){
	cout<<"Car started";
}
};

class basic_car: public advance_car{
public:
	void playmusic(){
	cout<<"music started";
}
};

int main(){
	basic_car obj;
	advance_car *ptr = &obj;//base class pointer pointing to derived class object
	ptr->start();
	/*ptr->playmusic(); this statement will raise error because a base 
	class pointer can only point to data members of its own class and 
	not that of derived class*/
	cout<<endl;
	/*moral of the story-
	  you can call an advance car a basic car but not say that a basic
	  car is an advance car*/
	obj.playmusic();
	return 0;
}