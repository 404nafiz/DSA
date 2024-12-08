#include <bits/stdc++.h>
using namespace std;

vector<int> pair_sum(vector<int> input, int target)
{
    vector<int> ans;
    int size = input.size();
    int i=0,j=size-1;
 while(i<j)
 { int pairsum=input[i]+input[j];
   if(pairsum>target) j--;
   else if(pairsum<target) i++;
   else {
    ans.push_back(i);
    ans.push_back(j);
    return ans;
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
