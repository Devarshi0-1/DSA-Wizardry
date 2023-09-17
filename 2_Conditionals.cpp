#include <iostream>
using namespace std;

int main()
{
    int num, num2;

    cout << "Enter the value of Num: ";
    cin >> num;
    cout << "Enter the value of Num2: ";
    cin >> num2;

    if (num > num2)
        cout << "Num is greater than Num2";
    else if (num2 > num)
        cout << "Num2 is greater than Num";
    return 0;
}