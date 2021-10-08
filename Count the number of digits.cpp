#include <iostream>
using namespace std;
int main() {
  int num,n;  
  cout<<"Enter number: "; 
  cin>>n; 
  while (n!=0){
    n/=10; 
    num++;
  } 
  cout<<"Number of digits in number: "<<num;
  return 0;
}
