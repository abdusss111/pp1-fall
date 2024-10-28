#include <iostream>

using namespace std;

int main()
{

    int n, m; cin>>n>>m; int a[n]; bool flag = false;

    for(int i = 0; i < n; i++)
        cin>>a[i];

    for(int i = 0; i < n; i++)
    {
        if(a[i] == m)
        {
            cout<<i + 1;
            flag = true;
            break;
        }
        else if(m < a[i])
        {
            cout<<i;
            flag = true;
            break;
        }
    }

    if(!flag)
        cout<<n;

    return 0;
}


