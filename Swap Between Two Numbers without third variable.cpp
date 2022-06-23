#include <iostream>
using namespace std;
int main()
{
    int num1;
    int num2;
    cout << "Enter number 1: " << endl;
    cin >> num1;
    cout << "Enter number 2: " << endl;
    cin >> num2;
    cout << "After swaping" << endl;
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
    cout << "Number 1: " << num1 << endl;
    cout << "Number 2: " << num2 << endl;
    return 0;
}
