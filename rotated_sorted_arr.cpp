#include <iostream>
#include<vector>
using namespace std;
bool sort(vector<int>vec,int n)
{
    int c=0;
    for (int i = 1; i <vec.size();i++)
    {
        if (vec[i-1]>vec[i])
        {
            c++;
        }
        if(vec[vec.size()-1]>vec[0])
        {
            c++;
        }
        return c <= 1;
    }
}
int main()
{
    vector<int> v;
    int n;
    cin >> n;
    int t;
    for (int i = 0; i < n;i++)
    {
        cin >> t;
        v.push_back(t);

    }
    cout<<sort(v, n);
}