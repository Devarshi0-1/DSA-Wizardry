#include <iostream>
using namespace std;

// A  A  A
// B  B  B
// C  C  C

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
            cout << char(row + 64) << "  ";
            col++;
        }
        cout << endl;
        row++;
    }

    return 0;
}