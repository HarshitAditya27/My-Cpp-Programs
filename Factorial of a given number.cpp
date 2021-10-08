#include <iostream>
using namespace std;
int main() {
  int num; 
  long double fact {1}; 
  cout<<"Enter number: "; 
  cin>>num; 
  if (num<0) {
    cout<<"Factorial of a negative number never exists";
  }  
  else {
    for (int i=1;i<=num;i++) {
      fact*=i;
    } 
    cout<<"Factorial: "<<fact;
  }
  return 0;
}
