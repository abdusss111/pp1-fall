#include <iostream> 
using namespace std; 
int main(){
    int a, sum=0;
    while( cin.peek() != '\n' ){
        cin >> a;
        sum += a;
    }
    cout << sum;
    return 0;
}
