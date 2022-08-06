#include<bits/stdc++.h>
using namespace std;
int main(){
    string st="tanya bansal";
    transform(st.begin(), st.end(), st.begin(), ::toupper);
    reverse(st.begin(), st.end());
    
    cout << st;
}