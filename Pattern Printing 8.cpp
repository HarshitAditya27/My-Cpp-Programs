/*Write a program to print the following 

       1          
      2 1 2        
    3 2 1 2 3      
  4 3 2 1 2 3 4    
5 4 3 2 1 2 3 4 5  
  4 3 2 1 2 3 4    
    3 2 1 2 3
      2 1 2
        1 

*/ 

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int row = 1; row <= 2 * n; row++)
    {
        int c = row > n ? 2 * n - row : row;
        for (int s = 0; s < n - c; s++)
        {
            cout << "  ";
        }

        for (int col = c; col >= 1; col--)
        {
            cout << col << " ";
        }

        for (int col = 2; col <= c; col++)
        {
            cout << col << " ";
        }
        cout << " " << endl;
    }
    return 0;
}
