#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int row;
    int c;
    cout << "Enter thr rows: ";
    cin>>row;
    cout << "Enter thr Col: ";
    cin>>c;
    int arr[row][c];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> arr[i][j];
        }
        
       
    }
    
  
    int r = 0;
    cout << "wave form: ";
    for (int i = 0; i <c ; i++)
    {
    if(r==0){
        for (int j = 0; j < row; j++)
        {
            cout << arr[j][i]<<" ";
        }r = 1;}
        else
        {
        for (int j = row-1; j >=0; j--)
        {
            cout << arr[j][i]<<" ";
            
        }
        r = 0;
        }
    
}
}
    
