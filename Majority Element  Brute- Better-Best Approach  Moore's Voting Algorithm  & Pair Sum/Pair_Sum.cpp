#include <bits/stdc++.h>
using namespace std;

vector<int> pair_sum(vector<int> input, int target)
{
    vector<int> ans;
    int size = input.size();
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (input[i] + input[j] == target)
            {
                ans.push_back(i);
                ans.push_back(j);
                return ans; // Return immediately if the pair is found
            }
        }
    }
    return ans; // Return an empty vector if no pair is found
}

int main()
{
    vector<int> input = {1, 2, 3, 4, 5};
    int target = 8;
    vector<int> ans = pair_sum(input, target);
    if (!ans.empty())
    {
        cout << ans[0] << " " << ans[1] << endl;
    }
    else
    {
        cout << "No pair found." << endl;
    }
    return 0;
}
