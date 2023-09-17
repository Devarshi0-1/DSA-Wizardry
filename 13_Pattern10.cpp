#include <iostream>
using namespace std;

// A  B  C
// A  B  C
// A  B  C

int main()
{
    int n;
    cout << "Enter the Value of N: ";
    cin >> n;

    int row = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= n)
        {
            cout << char('A' + col - 1) << "  ";
            col++;
        }
        cout << endl;
        row++;
    }

    return 0;
}