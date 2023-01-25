#include <iostream>
using namespace std;
int main(){
  int num;
  cin >> num;
  int p = 1;
  while(p <= num){
    cout << p <<" ";
    p = p * 2;
  }
  return 0;
}