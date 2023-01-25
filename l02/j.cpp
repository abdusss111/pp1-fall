
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int i, size, result = 0;
    cin >> size;
    int* myArray;
    myArray = new int[size];

    for (i = 0; i < size; i++)
    {
        cin >> myArray[i];
        int x = myArray[i];
        if (x == 0) {
            result += 1;
        }
        else {
            while (x > 0) {
                if (x % 10 == 0) {
                    result += 1;
                }
                x /= 10;
            }
        }
    }
    cout << result << endl;
}