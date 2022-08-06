#include<bits/stdc++.h>
using namespace std;
int main()
{
    string st = "IAmACompetitiveProgrammer";
    for (int i = 0; i < st.length();i++)
    {
        if(isupper(st[i]) && i!=0 )
        {
            cout<<"\n";
            cout << st[i];
        }
        else
        {
            cout << st[i];
        }
    }
}