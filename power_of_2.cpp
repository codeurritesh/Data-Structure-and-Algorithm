#include<stdio.h>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPowerOfTwo(int n) {
        int f=0;
       for(int i=0;i<=31;i++)
       {
           if(n==pow(2,i))
           {
               f=1;
               break;
           }
       }
        if(f==1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
int main()
{

	int n;
	cin>>n;
 Solution obj;
cout<<obj.isPowerOfTwo(n);



}
