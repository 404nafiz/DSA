#include <bits/stdc++.h>
using namespace std;
int main()
{
 vector<int>input={1,2,1,1,2,1};
 int mejority_element_number=input.size()/2;
 for(int value : input)
 {
    int count=0;
    for(int index_value:input)
    {
        if(value==index_value) count++;
    }
    if(count>mejority_element_number)
    {
        cout<<value;
        break;
    } 
    else count=0; 
 }
 





}