#include <iostream>
using namespace std;
int main(){
	int r, c, i, j;
	cin >> r >> c;
	int a[r][c];
	int sumr[r], sumc[c];
	for ( i=0; i<r; i++ ){
    	for( j=0 ; j<c; j++ ){
        	cin >> a[i][j];
    	}
	}
 	for ( i=0; i<r; i++ ){
      	sumr[i]=0;
      	for ( j=0; j<c; j++ ){
          	sumr[i]+=a[i][j];
        }
    }
    for ( j=0; j<c; j++ ){
        sumc[j]=0;
  	    for ( i=0; i<r; i++){
      	    sumc[j]+=a[i][j];
        }
    }
    for ( i=0; i<r; i++ ){
   	    cout << "The sum of row number " << i+1 << " is " << sumr[i] << endl;
    }
    for ( j=0; j<c; j++ ){
   	    cout << "The sum of column number " << j+1 << " is " << sumc[j] << endl;
    }
    return 0;
}