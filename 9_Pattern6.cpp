#include <iostream>
using namespace std;

// 1
// 2  2
// 3  3  3

int main()
{
    int n;
    cout << "Enter the number of Rows: ";
    cin >> n;

    int row = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {
            cout << row << "  ";
            col++;
        }
        cout << endl;
        row++;
    }

    return 0;
}