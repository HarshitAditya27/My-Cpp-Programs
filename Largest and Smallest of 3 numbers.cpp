#include <iostream>
using namespace std;
int main()
{
    int num1;
    int num2;
    int num3;
    cout << "Enter number 1: " << endl;
    cin >> num1;
    cout << "Enter number 2: " << endl;
    cin >> num2;
    cout << "Enter number 3: " << endl;
    cin >> num3;
    if ((num1 > num2) && (num1 > num3))
    {
        cout << "Largest number is: " << num1 << endl;
    }
    else if ((num2 > num1) && (num2 > num3))
    {
        cout << "Largest number is: " << num2 << endl;
    }
    else
    {
        cout << "Largest number is: " << num3 << endl;
    }

    if ((num1 < num2) && (num1 < num3))
    {
        cout << "Smallest number is: " << num1 << endl;
    }
    else if ((num2 < num1) && (num2 < num3))
    {
        cout << "Smallest number is: " << num2 << endl;
    }
    else
    {
        cout << "Smallest number is: " << num3 << endl;
    }
    return 0;
}
