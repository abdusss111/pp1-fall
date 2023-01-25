#include <iostream>
using namespace std;
string func( string str, int num ){
    int counter=0;
    for ( int i=0; i<str.size(); i++ ){
        if ( isdigit(str[i]) ) counter++;
        else if ( num<=counter ) return "Valid";
        else counter=0;
    }
    return "Not valid";
}
int main(){
    int num;
    string str;
    cin >> str >> num;
    cout << func( str, num );
    return 0;
}