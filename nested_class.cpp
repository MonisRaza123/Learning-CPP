#include<iostream>
#include<string.h>
using namespace std;
class student{
private:
	char name[20];
	int rollno;
	class address{
	private:
		int hno;
		char street[20];
		char city[20];
		char pin[20];
	public:
		void setaddress(int h, char*s, char*c, char*p){
			hno=h;
			strcpy(street,s);
			strcpy(city,c);
			strcpy(pin,p);
		}

		void showaddress(){
			cout<<"\n"<<hno<<endl;
			cout<<street<<endl;
			cout<<city<<endl;
			cout<<pin<<endl;
		}

	};
	address add1;
public:
	void setroll(int r){
		rollno=r;
	}
	void setname(char*n){
		strcpy(name,n);
	}
	void storeadd(int h, char*s, char*c, char*p){
		add1.setaddress(h, s, c, p);
	}
	void showstudent(){
		cout<<"Student data: "<<endl;
		cout<<rollno<<" ";
		cout<<name<<" ";
		add1.showaddress();
	}
};

int main(){
	student s1;
	s1.setname("Monis Raza");
	s1.setroll(21);
	s1.storeadd(198,"guru gobind singh","Delhi","110019");
	s1.showstudent();
	return 0;
}