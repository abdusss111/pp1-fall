#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int max = INT_MIN;
    int index;
    int curr;
    for (int i = 1; i <= n; i++)
    {
        cin >> curr;
        if (curr > max)
        {
            max = curr;
            index = i;
        }
    }
    cout << index;
    return 0;
}