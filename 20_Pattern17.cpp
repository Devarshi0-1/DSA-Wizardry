#include <iostream>
using namespace std;

// 1  2  3  4  5  5  4  3  2  1
// 1  2  3  4  *  *  4  3  2  1
// 1  2  3  *  *  *  *  3  2  1
// 1  2  *  *  *  *  *  *  2  1
// 1  *  *  *  *  *  *  *  *  1

int main()
{
    int n;
    cout << "Enter the value of N: ";
    cin >> n;

    int row = 1;
    while (row <= n)
    {
        // Triangle 1
        int col_t1 = 1;
        while (col_t1 <= n - row + 1)
        {
            cout << col_t1 << "  ";
            col_t1++;
        }

        // Pyramid
        int start = row - 1;
        while (start)
        {
            cout << "*  *  ";
            start--;
        }

        // Triangle 2
        int col_t2 = n - row + 1;
        while (col_t2)
        {
            cout << col_t2 << "  ";
            col_t2--;
        }

        cout << endl;
        row++;
    }

    return 0;
}