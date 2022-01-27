#include <bits/stdc++.h>
vector<vector<int>> pairSum(vector<int> &arr, int s){
  vector<vector<int>>st;
    for(int i=0;i<arr.size();i++)
  {
      for(int j=i+1;j<arr.size();j++)
      {
          if((arr[i]+arr[j])==s)
          {
              vector<int>temp;
              temp.push_back(min(arr[i],arr[j]));
             temp.push_back(max(arr[i],arr[j]));
              st.push_back(temp);
                  
          }
      }
  }
     sort(st.begin(),st.end());
         return st;
   
    
    
}
