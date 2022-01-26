int findUnique(int *arr, int size)
{
   int t=0;
   for(int i=0;i<arr.size();i++)
   {
       t=t^arr[i];
   }
    return t;
        }
