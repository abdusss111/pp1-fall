#include <iostream>
using namespace std;
int main(){
  int n,max=0,i=0,num;
  cin >> n;
  while(i<n){
    i++;
    cin >>num;
    if(num>max){
      max=num;
    }
  }
  cout << max;
}