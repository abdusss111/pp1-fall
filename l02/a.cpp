#include <iostream>
using namespace std;
int main(){
    int n ;
    cin >> n;
    if ( n == 0 )
    {
        cout << "None";
        return 0;
    }
    if ( n%2 == 0)
    {
        cout << "Even";
        return 0;
    }
    else
    {
        cout << "Odd";
    }
    return 0;
}