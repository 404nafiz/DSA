#include <bits/stdc++.h>
using namespace std;
// Optimize Algo
int main()
{
    vector<int> input = {1, 2, 1, 1, 2, 1};
    sort(input.begin(), input.end());
    int count = 1, ans = input[0];
    for (int i = 1; i < input.size(); i++)
    {
        if (input[i] == input[i - 1])
        {
            count++;
        }
        else
        {
            count = 1;
            ans = input[i];
        }
        if (count > input.size() / 2)
        {
            cout << ans << endl; // Print the majority element
            return 0;            // Exit the program after printing
        }
    }

    cout << "No majority element found" << endl; // Handle the case where no majority element exists
    return 0;
}
