#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of lines: ";
    cin >> n;

    int a[100][100];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || j == i)
                a[i][j] = 1;
            else
                a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int space = 0; space < n - i - 1; space++)
            cout << " ";

        for (int j = 0; j <= i; j++)
            cout << a[i][j] << " ";

        cout << endl;
    }

    return 0;
}
