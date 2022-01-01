/*
Daniel Diaz
LeetCode Algorithms Problem - Palindrome Number

- Description:
Given an integer x, return true if x is palindrome integer.

An integer is a palindrome when it reads the same backward as forward.

For example, 121 is a palindrome while 123 is not.
*/

// - My Solution:
class Solution {
public:
    bool isPalindrome(int x) {
        
        //checks if negative number
        if (x < 0) return false;
        
        //stores number as string
        string original = to_string(x);
        string reversed = "";
        
        vector<char> vec;
        
        //iterate from back of string and store each individual characters into vector
        for (int i = original.length() - 1; i < original.length(); --i) {
            vec.push_back(original[i]);
        }
        
        //create a string with the stored characters within the vector
        for (const char &c: vec) {
            reversed += c;
        }
        
        //check if the original string and reversed string are equal or a palindrome
        return original == reversed;
    }
};
