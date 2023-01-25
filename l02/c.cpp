#include <iostream>
using namespace std;
int main(){
    int n ;
    cin >> n;
    if ( n%4 == 0 )
    {
        cout << "YES";
    }
    else if ( n%100 == 0 )
    {
        cout << "NO";
        return 0;
    }
    else 
    {
        cout << "NO";
    }
    return 0;
}