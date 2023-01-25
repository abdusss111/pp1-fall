#include <iostream>
using namespace std;
int main(){
  int num;
  cin >> num;
  
  for (int i=1; i*i<=num; i++){
    cout << i*i <<endl;
  }

  return 0;
}