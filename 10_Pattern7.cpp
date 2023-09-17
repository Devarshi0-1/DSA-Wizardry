#include <iostream>
using namespace std;

// 1
// 2  3
// 3  4  5

int main()
{
    int n;
    cout << "Enter the number of Rows: ";
    cin >> n;

    int row = 1;
    int count = 1;
    while (row <= n)
    {
        int col = 1;
        int count = row;
        while (col <= row)
        {
            // cout << row + col - 1 << "  "; -- Also Correct
            cout << count << "  ";
            count++;
            col++;
        }
        cout << endl;
        row++;
    }

    return 0;
}