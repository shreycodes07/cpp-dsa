//Conversion of Decimal number to Binary
#include<iostream>
using namespace std;
int main(){
	int a[10],n,i=0;
	cout<<"Enter the number to convert: ";
	cin>>n;
	if(n==0)
	cout<<"00";
	else
	{
		while(n>0)
		{
			a[i]=n%2;
			n=n/2;
			i++;
		}
		cout<<"Binary of the given number = ";
		for(i=i-1;i>=0;i--)
		cout<<a[i]<<" ";
	}
}
