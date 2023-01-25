#include <iostream>
using namespace std;
int main(){
  int size, num, evens=0, odds=0;
  cin >> size;
  for (int i=0; i<size; i++ )
  {
    cin >> num;
    if ( num%2==0 )
  {
    evens++;
  }
    else 
    {
      odds++;
    }
  } cout << evens << " " << odds;

} 