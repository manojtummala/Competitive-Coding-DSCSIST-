class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int> copy = nums;
        
        sort(nums.begin(),nums.end());
        
        int i = 0, j = nums.size()-1;
        
        while(i<j){
            if (nums[i]+nums[j]>target)
                j--;
            else if(nums[i]+nums[j]<target)
                i++;
            else {
                i = find(copy.begin(),copy.end(),nums[i])-copy.begin();
                for (auto it=copy.begin();it!=copy.end();it++){
                    if (*it == nums[j]){
                        if(it-copy.begin() == i)
                            continue;
                        j = it-copy.begin();
                        break;
                    }
                }
                        
                return {i,j};
            }
                    
        }
        return {-1,-1};
    }
};