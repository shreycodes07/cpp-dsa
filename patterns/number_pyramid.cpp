#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter no. of lines ";
    cin >> n;

    for (int i = 1; i <= n; i++) {

        // spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        // numbers
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }

        cout << endl;
    }

    return 0;
}
