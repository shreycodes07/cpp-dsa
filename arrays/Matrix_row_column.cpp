#include <iostream>
using namespace std;

int main()
{
    int a[10][10], r, c;
    int maxSum = 0, row = 0;

    cout << "Enter number of rows: ";
    cin >> r;

    cout << "Enter number of columns: ";
    cin >> c;

    cout << "Enter elements:\n";

    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            cin >> a[i][j];
        }
    }

    for(int i = 0; i < r; i++)
    {
        int sum = 0;

        for(int j = 0; j < c; j++)
        {
            sum = sum + a[i][j];
        }

        if(i == 0 || sum > maxSum)
        {
            maxSum = sum;
            row = i;
        }
    }

    cout << "Row with maximum sum is: " << row + 1 << endl;
    cout << "Maximum sum = " << maxSum << endl;

    return 0;
}
