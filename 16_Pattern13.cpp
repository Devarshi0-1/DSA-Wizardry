#include <iostream>
using namespace std;

// D
// C  D
// B  C  D
// A  B  C  D

int main()
{
    int n;
    cout << "Enter the value of N: ";
    cin >> n;

    int row = 1;
    char ch;

    while (row <= n)
    {
        int col = 1;
        ch = 'A' + n - row;
        while (col <= row)
        {
            cout << ch << "  ";
            ch++;
            col++;
        }
        cout << endl;
        row++;
    }

    return 0;
}