#include <iostream>
using namespace std;

int main()
{
    int a[50], n;
    int largest, second;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++)
        cin >> a[i];

    largest = second = -9999;

    for(int i = 0; i < n; i++)
    {
        if(a[i] > largest)
        {
            second = largest;
            largest = a[i];
        }
        else if(a[i] > second && a[i] != largest)
        {
            second = a[i];
        }
    }

    cout << "Largest element = " << largest << endl;
    cout << "Second largest element = " << second << endl;

    return 0;
}
