//Insertion sort
#include<iostream>
using namespace std;
class insertion{
	int a[10],n;
	public:void input();
	void sort();
};
void insertion::input(){
	cout<<"Enter the number of elements of array ";
	cin>>n;
	cout<<"Enter the elements of the array \n";
	for(int i=0;i<n;i++)
	cin>>a[i];
	cout<<"\nThe entered array is\n";
	for(int i=0;i<n;i++)
	cout<<a[i]<<" ";
	cout<<endl;
}
void insertion::sort(){
	int i,j,k,x;
	for(i=1;i<n;i++)
	{x=a[i];
	j=i-1;
	while(j>=0&&x<a[j])// for desc while(j>=0 && x>a[j])
	{ 
	a[j+1]=a[j];
	j--;
	}
	a[j+1]=x;
	cout<<"\nAfter iteration "<<i<<": ";
	for(int k=0;k<n;k++)
	cout<<" "<<a[k];
	}
	cout<<"\n\nThe final sorted array in ascending order is:\n ";
	for(int k=0;k<n;k++)
	cout<<" "<<a[k];
	}
int main(){
	int choice;
	insertion c ;
	c.input();
	c.sort();
}
