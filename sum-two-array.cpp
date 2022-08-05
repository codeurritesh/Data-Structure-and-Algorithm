#include<bits/stdc++.h>
using namespace std;
int atop(vector<int>a1,vector<int>a2)
{
//for array 1
int s1=a1.size();
int s2 = a2.size();
int val1 = 0;//1--10--12--120--123---1230---1234---12340
int val2 = 0;
for (int i = 0; i < s1; i++)
{
    /* code */
    val1 += a1[i];
    if(i<s1-1)
    {
        val1 *= 10;
    }
}
//for array 2
for (int i = 0; i < s2; i++)
{
    /* code */
    val2 += a2[i];
    if(i<s2-1)
    {
        val2 *= 10;
    }
}
return val1+val2;
}
int main()
{
    vector<int> arr1 = {9,9};
    vector<int> arr2 = {9,9};
    int p=atop(arr1, arr2);
    vector<int> v1;
    while (p!=0)
    {
        v1.push_back(p % 10);
        p /= 10;
    }
    reverse(v1.begin(),v1.end());
    for (int t:v1)
    {
        cout << t<<" ";
    }

    
}