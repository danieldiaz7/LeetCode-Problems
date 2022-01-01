/*
Daniel Diaz
LeetCode Algorithms Problem - Two Sum

- Description:
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.
*/

// - My Solution:
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    
        vector<int> v;
        
        //outer loop index's through each element within vector
        for (int currIndex = 0; (int) currIndex < nums.size(); ++currIndex) {
            
            //inner loop index's starting one past currIndex of outerloop
            for (int i = currIndex + 1; (int) i < nums.size(); ++i) {
            
                if (nums[i] + nums[currIndex] == target) {
                    v.push_back(currIndex);
                    v.push_back(i);
                    return v;
                }
                
            }
            
        }
        //if no pair found, will return empty vector
        return v;  
    }
};


