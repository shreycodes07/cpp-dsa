#include<iostream>
using namespace std;
class matrix{
	int a[10][10],b[10][10],m,n;
	public:void input();
	void transpose();
	void output();
	};
void matrix::input(){
	cout<<"Enter the rows and colums of matrix:\n";
	cin>>m>>n;
	cout<<"\nEnter the elements of matrix:\n";
	for(int i=0;i<m;i++)
	for(int j=0;j<n;j++)
	cin>>a[i][j];
	transpose();
}
void matrix::transpose(){
	int i,j;
	for(i=0;i<n;i++)
	for(j=0;j<m;j++)
	b[i][j]=a[j][i];
	output();
}
void matrix::output(){
	
	cout<<"\nOriginal matrix is\n";
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		cout<<a[i][j];
		cout<<endl;
	}
	cout<<"\nTranspose of the matrix is"<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		cout<<b[i][j];
		cout<<endl;
	}
}
int main(){
	matrix a;
	a.input();
}
