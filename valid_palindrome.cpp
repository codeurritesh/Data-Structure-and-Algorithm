#include<bits/stdc++.h>
using namespace std;
 // only contain alpha numeric nd numb
    bool check(char ch)
    {
        if((ch>='a'&& ch<='z')||(ch>='A' && ch<='Z') || (ch>='0' && ch<='9'))
        {
            return 1;
        }
        else{
            return 0;
        }
    }
    char tolower(char ch)
    {
        if(ch>='a' && ch<='z')
        {
            return ch;                           
        }
        else{
            char t;
            t = ch - 'A' + 'a';
            return t;
        }
    }
string validp(string str)
{
    
    string temp;
    for (int j = 0; j < str.length();j++)
    {
        if(check(str[j]))
        {
            temp.push_back(str[j]);
        }
    }
    return temp;
}
bool final(string str)
{
    int s = 0;
    int e = str.length() - 1;
    while(s<=e)
    {
        if(tolower(str[s])!=tolower(str[e]))
        {
            return 0;
        }
        else{
            s++;
            e--;
        }
        return 1;
    }
}
int main()
{
    string s = " %$o55o^";
    string tt=validp(s);
    cout<<final(tt);
  
}