#include <iostream>
using namespace std;

//       *
//    *  *
// *  *  *

int main()
{
    int n;
    cout << "Enter the value of N: ";
    cin >> n;

    int row = 1;

    while (row <= n)
    {
        int space = n - row;

        while (space > 0)
        {
            cout << "  ";
            space--;
        }

        int col = 1;

        while (col <= row)
        {
            cout << "* ";
            col++;
        }
        cout << endl;
        row++;
    }

    return 0;
}