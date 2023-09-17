#include <iostream>
using namespace std;

//       1
//     1 2 1
//   1 2 3 2 1
// 1 2 3 4 3 2 1

int main()
{
    int n;
    cout << "Enter the value of N: ";
    cin >> n;

    int row = 1;

    while (row <= n)
    {
        int space = n - row;

        while (space)
        {
            cout << "  ";
            space--;
        }

        int col = 1;
        while (col <= row)
        {
            cout << col << " ";
            col++;
        }

        int start = row - 1;
        while (start)
        {
            cout << start << " ";
            start--;
        }

        cout << endl;
        row++;
    }
}