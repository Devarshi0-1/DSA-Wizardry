#include <iostream>
using namespace std;

// Row = Col
// 1  1  1
// 2  2  2
// 3  3  3

int main()
{

    int n;
    cout << "Enter the value of N: ";
    cin >> n;

    int i = 0;

    while (i < n)
    {
        int j = 0;
        while (j < n)
        {
            cout << i + 1 << "  ";
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}