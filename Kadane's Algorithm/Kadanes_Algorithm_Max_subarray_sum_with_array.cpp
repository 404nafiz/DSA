#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Using the vector and the kadane's algorithm to make the process easy and most optimised//
    int array[5] = {1, 2, 3, 4, 5};
    int max_value = INT_MIN;
    for (int start = 0; start < 5; start++)
    {
        int current_sum = 0;
        for (int end = start; end < 5; end++)
        {
            current_sum += array[end];
            max_value = max(current_sum, max_value);
        }
        if(current_sum<0) current_sum=0;
    }
    cout<<max_value;
}