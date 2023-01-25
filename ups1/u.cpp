#include <iostream>
#include <cmath>
using namespace std;

int main(){
	float x, y, z;
	cin >> x >> y;
	z=x;
	if ( y<=x ) cout << "1";
	else{
		for ( float i=2; i<=10000; i++ ){
			z=z*1.1;
			if( z>=y ){
				cout << i;
				break;
			}
		}
	}
	return 0;
}