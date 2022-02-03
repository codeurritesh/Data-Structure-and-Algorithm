class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
       int s=-1,e=-1;
        vector<int>p;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==target)
            {
                e=i;
            }
            if(s==-1)
            {        
                s=e;
             }
            
        }
          p.push_back(s);
         p.push_back(e);
        return p;
    }
};
