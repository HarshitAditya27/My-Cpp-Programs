// C++ program to display Fibonacci Series up to n number of terms 
#include <iostream>
using namespace std;
int main() {
  int n1 {0}; 
  int n2 {1}; 
  int n,nt;  
  cout<< "Enter number: ";  
  cin>>n;   
  cout << "Fibonacci Series: ";
  for (int i =1; i<=n;i++) {
    if (i == 1) { 
      cout<<n1<<","; 
      continue;
    } 
    if (i == 2) {
      cout<<n2<<","; 
      continue; 
    } 
    nt = n1+n2; 
    n1= n2; 
    n2= nt; 
    cout<<nt<<",";
  }
  return 0;
}
