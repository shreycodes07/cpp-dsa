#include <iostream>
using namespace std;

int main()
{
    int a[10][10], r, c;

    cout << "Enter number of rows: ";
    cin >> r;

    cout << "Enter number of columns: ";
    cin >> c;

    cout << "Enter the elements:\n";
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            cin >> a[i][j];
        }
    }

    cout << "\nLargest element in each row:\n";

    for(int i = 0; i < r; i++)
    {
        int max = a[i][0];

        for(int j = 1; j < c; j++)
        {
            if(a[i][j] > max)
                max = a[i][j];
        }

        cout << "Row " << i + 1 << " = " << max << endl;
    }

    return 0;
}
