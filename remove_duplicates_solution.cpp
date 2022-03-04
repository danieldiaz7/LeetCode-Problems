/*
Daniel Diaz
LeetCode Problem - Remove Duplicates from Sorted Array

- Description:
Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. 
The relative order of the elements should be kept the same.
*/

// - My Solution:
class Solution {
public:
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
};
