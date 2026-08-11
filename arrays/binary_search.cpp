#include<iostream>

using namespace std;
class binary{
	int a[10],n,x;
	public:void input();
	void search();
};

void binary::input(){
	int i;
	cout<<"Enter the number of elements: ";
	cin>>n;
	//Enter array in ascending order
	cout<<"\nEnter the elements in ascending order max 10:\n";
	for(i=0;i<n;i++)
	cin>>a[i];
	
	cout<<"The entered array is\n";
	for(i=0;i<n;i++)
	cout<<"\t"<<a[i];
	
	cout<<"\nEnter the element to be searched";
	cin>>x;
	}

void binary::search(){
	int l=0,m,h,k=0;
	h=n-1;
	while(l<=h)
	{
		m=(l+h)/2;
		if(x==a[m])
		{
			k=1;
			cout<<"\nElement "<<x<<" present at "<<m+1;
			break;
		}
		else
		if(x<a[m])
		h=m-1;
		else
		l=m+1;
	}
	if(k==0)
	cout<<"\nElement "<<x<<" is not present";
}	
int main(){
	binary obj;
	obj.input();
	obj.search();
	
}
