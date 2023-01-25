#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
string str;
int x=0;
size_t npower(){
	size_t k = powl(x,x);
	++x;
	return k;
}

int main(){
    int n;
    cin >> n;
    vector <size_t> v(n+1);
    generate( v.begin(), v.end(), npower );
    vector <size_t> :: iterator it;
    for ( it=v.begin(); it!=v.end(); it++ ){
        cout << (*it) << " ";
    }
    return 0;
}