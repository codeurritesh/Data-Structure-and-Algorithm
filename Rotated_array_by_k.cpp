#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void rot(int n,vector<int>vect)
{
    int siz = vect.size();
    int pos;
    vector<int> v2(siz,0);
    for (int i = 0; i < siz; i++)
    {
        pos = (i + n) % siz;
        v2[pos] = vect[i];
   }
   for(int p:v2){
       cout << p << " ";
   }
}
int main()
{
    int n;
    cout << "Enter the degree: ";
    cin >> n;
    vector<int> vect{10, 20, 30, 40, 50};
    rot(n, vect);
}