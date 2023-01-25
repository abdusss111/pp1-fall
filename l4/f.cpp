#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, curr, x, y;
    cin >> n;
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> curr;
            if (max < curr)
            {
                max = curr;
                x = i + 1;
                y = j + 1;
            }
        }
    }
    cout << x << " " << y;
    return 0;
}
