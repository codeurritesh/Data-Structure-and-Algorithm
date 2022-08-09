#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    string st="hhhhhellobello";
    
    int len = st.length();
    list<char> lt;
    
    for (int i = 0; i < len; i++)
    {
        lt.push_back(st[i]);
        /* code */
   }
   lt.sort();
   lt.unique();
  
   int a = 0;
   int max = 0;
   char  ch;
   for (char i:lt)
   {
       a = 0;
       for (int j = 0; j < len; j++)
       {
           if (i == st[j])
           {
               a++;
           }
           
    }
    if(max<a){
        max = a;
        ch = i;
    }

    
   }
   cout << ch;
}