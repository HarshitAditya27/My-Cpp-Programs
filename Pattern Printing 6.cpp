/*

Write a program to print the following pattern: 
  
    *      
   * *     
  * * *    
 * * * *   
* * * * *  
 * * * *   
  * * *
   * *
    *

*/ 

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int row = 1; row <= 2 * n - 1; row++)
    {
        for (int s = 0; s < n - (row > n ? 2 * n - row : row); s++)
        {
            cout << " ";
        }
        for (int col = 1; col <= (row > n ? 2 * n - row : row); col++)
        {
            cout << "* ";
        }
        cout << " " << endl;
    }
    return 0;
}
