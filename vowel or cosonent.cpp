#include <iostream>
using namespace std;
int main() {
  // Vowel or Consonent
  char character; 
  cout<<"Enter Character "<< endl; 
  cin>> character; 
  if (character =='a'  || character =='e' || character =='i' || character =='o'|| character =='u' ) {
    cout<<character<< " is vowel"<<endl;
  } 
  else {
    cout<<character<< " is consonent"<<endl;
  } 
  return 0; 
  }
