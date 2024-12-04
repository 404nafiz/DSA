#include <bits/stdc++.h>
using namespace std;
int main()
{
 int size;
 cin>>size;
 int array[size];
 for(int i=0;i<size;i++)
 {
    cin>>array[i];

 }
 int smallest=INT_MAX;
 for(int i=0;i<size;i++)
 {
    if(smallest>array[i]) smallest=array[i];


 }
 cout<<smallest;



}