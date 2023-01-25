#include <iostream>
using namespace std;
 
int main () {
   long long n, i, j, pr;
   cin >> n;
   int k=1;
    for ( i = 2; i<n; i++ ){
        for ( j = 2; j <= (i/j); j++ )
     	    if ( !(i%j) ) break;
     	    if( j > (i/j) ) i=pr;
   }
   cout << pr;
   return 0;
}
