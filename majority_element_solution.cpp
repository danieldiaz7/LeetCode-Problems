/*
Daniel Diaz
LeetCode Algorithms Problem - Majority Element
- Description:
Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.
*/

// - My Solution:
class Solution {
public:
    int majorityElement(vector<int>& nums) {
       
        //uses the boyer-moore voting algorithm
        
        int count = 1, candidate = nums[0];
        
        for (int i = 1; i < nums.size(); ++i) {
            
            //if current element is not the same as the candidate, we decrement the count variable by 1
            if (nums[i] != candidate) {
                --count;
            }
            //otherwise we just increment it by 1 if they're the same
            else {
                ++count;
            }
            
            // if count ever reaches 0, we found a new candidate and increment count by 1
            if (!count) {
                candidate = nums[i];
                ++count;
            }
        }
        
        return candidate;
    }
};
