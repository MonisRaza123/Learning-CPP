#include <iostream>
using namespace std;

class student{
protected:
	int roll_no;
public:
	void set_number(int r){
		roll_no=r;
	}

	void print_number(){
		cout<<"Roll no: "<<roll_no<<endl;
	}
};

class Test:public virtual student{
protected:
	float Math, Phy;
public:
	void set_marks(float m1, float m2){
		Math=m1;
		Phy=m2;
	}

	void print_marks(){
		cout<<"Math Score: "<<Math<<endl;
		cout<<"Physics Score: "<<Phy<<endl;
	}	
};

class Sports:public virtual student{
protected:
	int score;
public:
	void set_score(int p){
		score=p;
	}

	void print_score(){
		cout<<"P.T. Score: "<<score<<endl;
	}
};

class Result: public Test, public Sports{
private:
	float total;
public:
	void display(){
		total=Math+Phy+score;
		print_number();
		print_marks();
		print_score();
		cout<<"Sum Total: "<<total<<endl;
	}
};

int main(){
	Result obj;
	obj.set_number(21);
	obj.set_marks(100,100);
	obj.set_score(10);
	obj.display();
	return 0;
}