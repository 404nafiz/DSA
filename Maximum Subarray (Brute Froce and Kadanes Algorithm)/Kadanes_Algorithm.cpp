#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cin >> size;
    int array[size];
    for (int i = 0; i < size; i++)
    {

        cin >> array[i];
    }
    int currentsum = 0, maxsum = INT_MIN;
    for (int start = 0; start < size; start++)
    {
        currentsum += array[start];
        maxsum = max(currentsum, maxsum);
        if (currentsum < 0)
            currentsum = 0;
    }
    cout << "Maximum Subarray Sum is:" << " " << maxsum;

    return 0;
}