#include <iostream>
#include<conio.h>
using namespace std;
void display(int a[],int n)
{int i;
cout << "Displaying elements" << endl;
for ( i = 0; i < n; i++)
{
cout << " "<<a[i];;
}
}
void check(int a[],int n) {
cout << "\nDisplaying elemts divisible by 3 or 5 " << endl;
for (int i = 0; i < n; i++)
if(a[i]%3==0 || a[i]%5==0)
cout<<" "<<a[i];
}
int main()
{
int a[50],n,i;
cout<<"enter size";
cin>>n;
cout<<"Enter Elements";
for (i = 0; i < n; i++)
cin>>a[i];
display(a,n);
check(a,n);
getch();
}
