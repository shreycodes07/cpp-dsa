#include<iostream>
using namespace std;
class array
{
	int n,a[100];
	public:void create();
	void display();
};
void array::create(){
	int i;
	cout<<"\nEnter the number of elements max 100\n";
	cin>>n;
	cout<<"Enter the elements of the array:\n";
	for(i=0;i<n;i++)
	cin>>a[i];
}
void array::display()
{
	int i;
	cout<<"\nThe elements of array are:\n";
	for(i=0;i<n;i++)
	cout<<" "<<a[i];
}
int main(){
	array a;
	a.create();
	a.display();
}
