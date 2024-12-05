#include <bits/stdc++.h>
using namespace std;
int main()
{
    int array[5] = {1, 2, 3, 4, 5};
    int max_sum=INT_MIN;
    for (int start = 0; start < 5; start++)
    {
        for (int end = start; end < 5; end++)
        {
                int current_sum=0;
            for (int i = start; i <= end; i++)
            {
               current_sum+=array[i];
            }
            max_sum=max(current_sum,max_sum);
            
        }
        
    }
    cout<<max_sum;
    return 0;
}
