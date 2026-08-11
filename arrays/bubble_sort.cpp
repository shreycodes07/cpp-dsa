//Bubble sort
#include<iostream>
using namespace std;
class bubble{
	int a[100],n;
	public:void input();
	void sort();
};
void bubble::input(){
	cout<<"Enter the number of elements max 100: ";
	cin>>n;
	cout<<"Enter the elements of the array: ";
	for(int i=0;i<n;i++)
	cin>>a[i];
}
void bubble::sort(){
	int i,j,k,t;
	for(i=1;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		if(a[j]>a[j+1]) //To sort in desc if(a[j]<a[j+1])
		{
			t=a[j];
			a[j]=a[j+1];
			a[j+1]=t;}
			cout<<"\nAfter iteration "<<i<<" : ";
			for(k=0;k<n;k++)
            cout<<" "<<a[k];}
			
			cout<<"\nThe final sorted array in ascending order is\n";
			for(k=0;k<n;k++)
			cout<<" "<<a[k];
		
}
int main(){
	bubble a;
	a.input();
	a.sort();
}
