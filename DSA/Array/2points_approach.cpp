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
    if (size % 2 == 0)
    {
        int start = 0, end = size - 1;
        while (start < end)
        {
            swap(array[start], array[end]);
            start++;
            end--;
        }
        for (int i = 0; i < size; i++)
        {
            cout << array[i];
        }
    }
    else
    {

        int start = 0, end = size - 1;
        while (start != end)
        {
            swap(array[start], array[end]);
            start++;
            end--;
        }
        for (int i = 0; i < size; i++)
        {
            cout << array[i]<<" ";
        }
    }
}