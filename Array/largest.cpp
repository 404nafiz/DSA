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
 int largest=INT_MIN;
 for(int i=0;i<size;i++)
 {
    if(array[i]>largest) largest=array[i];


 }
 cout<<largest;



}