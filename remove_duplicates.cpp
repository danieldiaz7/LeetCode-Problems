int removeDuplicates(vector<int>& nums) {
        
        //if array of size 1, there are no duplicates -> just return 1
        if (nums.size() == 1 ) return 1;
        
        int currIndex = 0, count = 1;
        
        
        //starting at the second element, we iterate until we reach a value greater than value at currIndex
        for (int i = 1; i < nums.size(); ++i) {
            
            if (nums[i] > nums[currIndex]) {
                
                //set the next index of currIndex to current value and increment both count and currIndex
                nums[++currIndex] = nums[i];
                ++count;
            }
        }
        
        return count;
    }
