#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool check(vector<int>vect)
{
    int count=0;
    int n = vect.size();
    for (int i = 1; i < n; i++)
    {
        /* code */

        if(vect[i-1]>vect[i])
        {
            count++;
        }
    }
    if(vect[n-1]>vect[0])
        count++;
    return count <= 1;
}
int main()
{
    vector<int> vect{3,4,5,1,20};
   
    if(check(vect))
    {
        cout << "True";
    }
    else
        cout << "False";
}

