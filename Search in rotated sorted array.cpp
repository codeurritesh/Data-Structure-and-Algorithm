int findPosition(vector<int>& arr, int n, int k)
{
    int t=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==k)
        {
            return i;
            break;
        }
        else
        {
            t=1;
        }
    }
    if(t==1)
    {
        return -1;
    }
}

