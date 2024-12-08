#include <bits/stdc++.h>
using namespace std;
// Moore's Voting Algo
int main()
{
    vector<int> input = {1, 2, 1, 1, 2, 1};
   int count=0,ans=0;
   for(int i=0;i<input.size();i++)
   {
    if(count==0)
    {
        ans=input[0];
    }
    if(ans==input[i]) count++;
    else count--;
   }
cout<<ans;
return 0;

}