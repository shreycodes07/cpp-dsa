#include<iostream>
using namespace std;

class Matrix
{
    int a[10][10], m, n;

public:
    void input()
    {
        cout << "Enter rows and columns:\n";
        cin >> m >> n;

        cout << "Enter the elements:\n";
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                cin >> a[i][j];
            }
        }
    }

    void display()
    {
        cout << "\nOriginal Matrix:\n";
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }

    void diagonalSum()
    {
        if(m != n)
        {
            cout << "\nMatrix is not a square matrix.";
            return;
        }

        int sum1 = 0, sum2 = 0;

        for(int i = 0; i < n; i++)
        {
            sum1 = sum1 + a[i][i];
            sum2 = sum2 + a[i][n-i-1];
        }

        cout << "\nMatrix is a square matrix.";
        cout << "\nSum of main diagonal = " << sum1;
        cout << "\nSum of secondary diagonal = " << sum2;
    }
};

int main()
{
    Matrix m;

    m.input();
    m.display();
    m.diagonalSum();

    return 0;
}
