/*

Write a program to print the following pattern: 

1        
1 2      
1 2 3    
1 2 3 4 

*/  

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            cout << col << " ";
        }
        cout << " " << endl;
    }
    return 0;
}
