#include <iostream>

using namespace std;

int main()
{

    int n, l, r; cin>>n>>l>>r; int a[n]; long long k = 0;
    for(int i = 1; i <= n; i++)
        cin>>a[i];
    
    for(int i = l; i <= r; i++)
        k += a[i];

    cout<<k;

    return 0;
}