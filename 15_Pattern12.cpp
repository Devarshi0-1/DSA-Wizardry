#include <iostream>
using namespace std;

// A  B  C
// B  C  D
// C  D  E

int main()
{
    int n;
    cout << "Enter the Value of N: ";
    cin >> n;

    int row = 1;
    while (row <= n)
    {
        int col = 1;
        char ch = 'A' + row - 1;
        while (col <= n)
        {
            cout << ch << "  ";
            col++;
            ch++;
        }
        cout << endl;
        row++;
    }

    return 0;
}

// https://youtu.be/dr-pLeJBr38?list=PLDzeHZWIZsTryvtXdMr6rPh4IDexB5NIA&t=1796