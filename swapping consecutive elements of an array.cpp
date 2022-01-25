#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int j=0;
	while(j<n)
	{
	
		int t=arr[j];
		arr[j]=arr[j+1];
		arr[j+1]=t;
		j=j+2;
	}
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
