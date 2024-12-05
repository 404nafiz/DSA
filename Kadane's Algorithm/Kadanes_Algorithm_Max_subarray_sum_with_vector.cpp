#include <bits/stdc++.h>
using namespace std;
int main()
{

    vector<int> input = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int max_sum = INT_MIN,current_sum=0;
    for (int value : input)
    {
         current_sum+=value;
        max_sum=max(current_sum,max_sum);
        if(current_sum<0) current_sum=0;
    }
    cout<<max_sum;
}