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

    int maxsum = INT_MIN;
    for (int start = 0; start < size; start++)
    {
        int currentSum = 0;
        for (int end = start; end < size; end++)
        {
            currentSum += array[end];
            maxsum = max(currentSum, maxsum);
        }
    }
    cout << "Maximum Subarray Sum is:" << " " << maxsum;
    return 0;
}