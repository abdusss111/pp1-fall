#include <iostream>
using namespace std;
int main(){
    long long n, a=0, b=0, c=0, d=0, e=0, sum=0;
    cin >> n;
    if ( n==100000 ) cout << 1;
    else if ( 10000<=n and n<100000 ){
        a=n/10000;
        b=(n-a*10000)/1000;
        c=(n-a*10000-b*1000)/100;
        d=(n-a*10000-b*1000-c*100)/10;
        e=(n-a*10000-b*1000-c*100-d*10)/1;
        cout << (a + b + c + d + e) + (a*b*c*d*e);
    }
    else if ( 1000<=n and n<10000 ){
        a=n/1000;
        b=(n-a*1000)/100;
        c=(n-a*1000-b*100)/10;
        d=(n-a*1000-b*100-c*10)/1;
        cout << (a + b + c + d) + (a*b*c*d);
    }
    else if ( 100<=n and n<1000 ){
        a=n/100;
        b=(n-a*100)/10;
        c=(n-a*100-b*10)/1;
        cout << (a + b + c) + (a*b*c);
    }
    else if ( 10<=n and n<100 ){
        a=n/10;
        b=(n-a*10)/1;
        cout << (a + b) + (a*b);
    }
    else if ( 1<=n and n<10 ){
        a=n/1;
        cout << a*2;
    }
    return 0;
}