#include <bits/stdc++.h> 
using namespace std;
 
int main()
{
    int i,j,n,loc,temp,min,a[30];
    cout<<"Enter the number of elements:";
    cin>>n;
    cout<<"\nEnter the elements\n";
 
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
 
    for(i=0;i<n-1;i++)
    {
        min=i;
                for(j=i+1;j<n;j++)
        {
            if(a[j]<arr[min])
            {
                min=j;
            }
        }
      swap(arr[min],arr[i]);
    }
 
    cout<<"\nSorted list is as follows\n";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
 
    return 0;
}
