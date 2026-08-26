#include<iostream>
using namespace std;

class id
{
    int a[10], n, pos, x;

public:
    void insert();
    void del();
    void input();
    void output();
};

void id::input()
{
    cout << "Enter the no. of elements: ";
    cin >> n;

    if(n > 10)
    {
        cout << "Maximum 10 elements allowed.\n";
        n = 0;
        return;
    }

    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++)
        cin >> a[i];
}

void id::insert()
{
    if(n == 10)
    {
        cout << "Array is full.\n";
        return;
    }

    cout << "Enter the number and position to be inserted: ";
    cin >> x >> pos;

    if(pos < 1 || pos > n + 1)
    {
        cout << "Invalid position.\n";
        return;
    }

    for(int i = n; i >= pos; i--)
        a[i] = a[i - 1];

    a[pos - 1] = x;
    n++;
}

void id::del()
{
    cout << "Enter the position to be deleted: ";
    cin >> pos;

    if(pos < 1 || pos > n)
    {
        cout << "Invalid position.\n";
        return;
    }

    for(int i = pos; i < n; i++)
        a[i - 1] = a[i];

    n--;
}

void id::output()
{
    cout << "The array is: ";

    for(int i = 0; i < n; i++)
        cout << a[i] << " ";

    cout << endl;
}

int main()
{
    int c;
    id a;

    do
    {
        cout << "\n1) Input\n";
        cout << "2) Insert\n";
        cout << "3) Delete\n";
        cout << "4) Output\n";
        cout << "0) Exit\n";

        cin >> c;

        switch(c)
        {
            case 1:
                a.input();
                break;

            case 2:
                a.insert();
                break;

            case 3:
                a.del();
                break;

            case 4:
                a.output();
                break;

            case 0:
                break;

            default:
                cout << "Invalid choice.\n";
        }

    } while(c != 0);

    return 0;
}
