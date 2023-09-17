#include <iostream>
using namespace std;

// A  B  C
// D  E  F
// G  H  I

int main()
{
    int n;
    cout << "Enter the Value of N: ";
    cin >> n;

    int row = 1;
    char ch = 'A';
    while (row <= n)
    {
        int col = 1;
        while (col <= n)
        {
            cout << ch << "  ";
            col++;
            ch = ch + 1;
        }
        cout << endl;
        row++;
    }

    return 0;
}