#include <iostream>
using namespace std;
int main(){
	int A[10][10],B[10][10],i,j,k;
	int m,n,p,q;
	cout<<"Enter the rows and columns of matrix 'A':"<<endl;
	cin>>m>>n;
	cout<<"Enter the rows and columns of matrix 'B':"<<endl;
	cin>>p>>q;
	if(n!=p){
		cout<<"Operation not possible";
		return 0;
	}

	int C[n][p];

	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			cout<<"Enter element a"<<i+1<<j+1;
			cin>>A[i][j];
			cout<<endl;
		}
	}

	cout<<"Entered matrix is: "<<endl;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			cout<<A[i][j]<<" ";
		}
		cout<<endl;
	}


	for(i=0;i<p;i++){
		for(j=0;j<q;j++){
			cout<<"Enter element b"<<i+1<<j+1;
			cin>>B[i][j];
			cout<<endl;
		}
	}

	cout<<"Entered matrix is: "<<endl;
	for(i=0;i<p;i++){
		for(j=0;j<q;j++){
			cout<<A[i][j]<<" ";
		}
		cout<<endl;
	}

	for(i=0;i<m;i++){
		for(j=0;j<q;j++){
			C[i][j]=0;
			for(int k=0;k<n;k++)
				C[i][j]+=A[i][j]*B[i][j];
		}
	}

	cout<<"The product Matrix is: "<<endl;

	for(i=0;i<m;i++){
		for(j=0;j<q;j++){
			cout<<C[i][j]<<" ";
		}
		cout<<endl;
	}

}