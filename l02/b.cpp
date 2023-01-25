#include <iostream>
using namespace std;
int main(){
    int n ;
    cin >> n;
     if ( n%2 == 1 )
    {
        cout << "Super";
        return 0;
    }
    else if (  n > 20 )
    {
        cout << "Not Super";
        return 0;
    }
    else if ( 6 < n < 20)
    {
        cout << "Super";
        return 0;
    }
    if ( n%2 == 0)
    {
        cout << "Not Super";
        return 0;
    }
    else if ( 2 < n < 5 ) 
    {
        cout << "Not Super";
        return 0;
    }
    return 0;
}