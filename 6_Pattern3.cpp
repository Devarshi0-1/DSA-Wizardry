#include <iostream>
using namespace std;

// Row = Col
// 3  2  1
// 3  2  1
// 3  2  1

int main()
{
    int n;
    cout << "Enter the number of Rows: ";
    cin >> n;

    int i = 0;
    while (i < n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << n - j + 1 << "  ";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}