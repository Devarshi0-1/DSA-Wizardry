#include <iostream>
using namespace std;

// 1
// 2  1
// 3  2  1

int main()
{
    int n;
    cout << "Enter the Value of N: ";
    cin >> n;

    int row = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {
            cout << row - col + 1 << "  ";
            col++;
        }
        cout << endl;
        row++;
    }

    return 0;
}