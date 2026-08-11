//Selection sort
#include<iostream>
using namespace std;
class select{
	int a[100],n;
	public:void input();
	void sort();
};
void select::input(){
	cout<<"Enter the size of the array:";
	cin>>n;
	cout<<"\nEnter the elements of the array\n" ;
	for(int i=0;i<n;i++)
	cin>>a[i];
}
void select::sort(){
	int i,j,t,pos,small;
	for(i=1;i<=n;i++)
	{small=a[i];
	pos=i;
	for(j=i+1;j<n;j++)
	if(small>a[j]) //for desc if(small<a[j])
	{
		small=a[j];
		pos=j;
	}
	if(a[i-1]>a[pos]) //for desc if(a[i-1]<a[pos]
	{
		t=a[i-1];
		a[i-1]=a[pos];
		a[pos]=t;
	}
	cout<<"\nAfter iteration "<<i<<" : ";
	for(int k=0;k<n;k++)
	cout<<" "<<a[k];
		}
		cout<<endl;
		cout<<"\nThe final sorted array in ascending order is:\n";
		for(int k=0;k<n;k++)
		cout<<" "<<a[k]<<" ";
}
int main(){
	select b;
	b.input();
	b.sort();
}
