#include <iostream>
using namespace std;

// Row = Col
// *  *  *
// *  *  *
// *  *  *

int main()
{
    int n, i = 0;

    cin >> n;

    while (i < n)
    {
        int j = 0;
        while (j < n)
        {
            cout << "*  ";
            j++;
        }
        i++;
        cout << endl;
    }

    return 0;
}