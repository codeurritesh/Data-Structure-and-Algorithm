#include<bits/stdc++.h>
using namespace std;
int main()
{
    char arr[]={'t','h','e',' ','s','k','y',' ','i','s',' ','b','l','u','e'};
    vector<char> v;
    list<char> temp;
    int k = 0;
    for (int i = 0; i < sizeof(arr);i++)
    {
        if(arr[i]!=' ' && i!=sizeof(arr)-1)
        {
            
            v.push_back(arr[i]);
          
        }
        else{
            int j = i;
            
            while(j>=k)
                {
                    temp.push_front(arr[j]);
                    j--;

                }
                k = i;
                temp.push_front(' ');
                v.clear();
        }
    }
    //
    temp.pop_front();
     temp.pop_front();
     temp.pop_back();

     for (char i : temp)
     {
         cout << i;
        
    }
    
       
}