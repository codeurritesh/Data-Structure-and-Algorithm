class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
         int g=0;
       for(int i=0;i<arr.size();i++)
       {
          
          
           if(arr[i]<arr[i+1])
           {
              continue;
           }
           else
           {
             g=i;
                            break;
           }
       }
    
         return g;
     
    }  
};
