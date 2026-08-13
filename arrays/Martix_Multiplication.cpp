#include<iostream>
#include<conio.h>
using namespace std;
class matrix{
	int a[10][10],b[10][10],c[10][10],m,n,p,q;
	public:void input();
	void compute();
	void output();
};
void matrix::input(){
	cout<<"Enter rows and columns of 1st matrix :\n";
	cin>>m>>n;
	cout<<"\nEnter rows and columns of 2nd matrix :\n";
	cin>>p>>q;
	if(n!=p)
	cout<<"\nMatrices cannot be multiplied";
	else{
		cout<<"\nEnter the elements of 1st matrix\n";
		for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
		cin>>a[i][j];
		cout<<"\nEnter the elements of 2nd matrix\n";
		for(int i=0;i<p;i++)
		for(int j=0;j<q;j++)
		cin>>b[i][j];
		compute();
		output();
	}
}
void matrix::compute(){
	int i,j,k;
	for(i=0;i<m;i++)
	for(j=0;j<p;j++)
	{
		c[i][j]=0;
		for(k=0;k<n;k++)
		c[i][j]=c[i][j]+a[i][k]*b[k][j];
	}
}
void matrix::output(){
	int i,j;
	cout<<"\nOriginal 1st matrix is"<<endl;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		cout<<" "<<a[i][j];
		cout<<endl;
	}
	cout<<"\nOriginal 2st matrix is"<<endl;
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		cout<<" "<<b[i][j];
		cout<<endl;
	}
	cout<<"\nMultiplied matrix is"<<endl;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		cout<<" "<<c[i][j];
		cout<<endl;
	}
}
int main(){
	matrix a;
	a.input();
	getch();
}
