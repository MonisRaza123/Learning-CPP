#include <iostream>
using namespace std;

int main(){
	int A[]={3,4,5,6,7,8,9};

	int l,u,mid,key;

	  cout<<"Enter key to be searched "<<endl;
	  cin>>key;
	  l=0;
	 u=sizeof(A)/sizeof(A[0]);
	 //cout<<u<<endl;
	  while(l<=u){
	  	mid=(l+u)/2;
	  	if(A[mid]>key){
	  		u=mid-1;
	  	}
	  	else if(A[mid]==key){
	  		cout<<"Key found at index "<<mid;
	  		return 0;
	  	}
	  	else{
	  		l=mid+1;
	  	}
	  }
	  cout<<"Key not found"<<endl;
	  		return 0;
	
}
