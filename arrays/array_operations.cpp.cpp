// Program: Array Arithmetic Operations
// Concepts: Arrays, OOP, Arithmetic Operations
#include<iostream>
using namespace std;
class cal{
	int n,a[100];
	public:void create();
	void display();
	void operations();
};
void cal::create(){
	int i;
	cout<<"\nEnter number of elements of array max 100\n";
	cin>>n;
	cout<<"\nEnter the elements of array:\n";
	for(i=0;i<n;i++)
	cin>>a[i];
}
void cal::display(){
	int i;
	cout<<"\nElements of array are:\n";
	for(i=0;i<n;i++)
	cout<<" "<<a[i];
	cout<<endl;
}

void cal::operations(){
	int c, result;
	do{
	
    cout<<"\n\nEnter your choice:";
    cout<<"\n1. Addition";
    cout<<"\n2. Subtraction";
    cout<<"\n3. Multiplication";
    cout<<"\n4. Division";
    cout<<"\n0. Exit\n";
    cout<<"\nEnter choice: ";
    cin >> c;

    switch (c) {
        case 1:
            result=a[0];
            for(int i=1;i<n;i++)
                result = result + a[i];
            cout << "\nAddition = " << result;
            break;

        case 2:
            result=a[0];
            for(int i=1;i<n;i++)
                result =result-a[i];
            cout << "Subtraction = " << result;
            break;

        case 3:
            result=a[0];
            for(int i=1;i<n;i++)
                result =result * a[i];
            cout<<"Multiplication = "<<result;
            break;

        case 4:
            result=a[0];
            for(int i=1;i<n;i++) {
                if (a[i] != 0)
                    result = result / a[i];
                else {
                    cout<<"Cannot divide by zero";
                }
            }
            cout<< "Division = " <<result;
            break;
            
        case 0:break;
        
        default:
            cout << "Invalid choice";
    } }while(c!=0);
}

int main() {
    cal obj;
    obj.create();
    obj.display();
    obj.operations();
}

