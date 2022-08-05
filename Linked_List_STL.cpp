#include<bits/stdc++.h>
using namespace std;
void prit(list<int>l)
{
     list<int>::iterator it;
    for (it = l.begin(); it != l.end();++it)
    {
        cout << *it<<" ";
    }
    cout << "\n";
}
int main(){
    list<int> l{1, 2, 3, 4, 5};
    l.push_back(100);
    l.push_front(200);
    prit(l);
    l.reverse();
    prit(l);
    l.sort();
    prit(l);
}