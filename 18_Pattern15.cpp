#include <iostream>
using namespace std;

// *  *  *
//    *  *
//       *

int main()
{
    int n;
    cout << "Enter the value of N: ";
    cin >> n;

    int row = 1;
    while (row <= n)
    {

        int space = row - 1;
        while (space > 0)
        {
            cout << "   ";
            space--;
        }

        int col = 1;

        while (col <= n - row + 1)
        {
            cout << "*  ";
            col++;
        }
        cout << endl;
        row++;
    }
    return 0;
}