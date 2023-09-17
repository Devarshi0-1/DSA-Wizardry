#include <iostream>
using namespace std;

// Row = Col
// 1  2  3
// 4  5  6
// 7  8  9

int main()
{
    int n;

    cout << "Enter Number of Rows: ";
    cin >> n;

    int i = 0;
    int k = 0;
    while (i < n)
    {
        int j = 0;

        while (j < n)
        {
            cout << k + 1 << "  ";
            j++;
            k++;
        }
        cout << endl;
        i++;
    }

    return 0;
}