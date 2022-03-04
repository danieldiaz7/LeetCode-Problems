/*
Daniel Diaz
LeetCode Problem - Implement Queue using Stacks
- Description:
Implement a first in first out (FIFO) queue using only two stacks. 
The implemented queue should support all the functions of a normal queue (push, peek, pop, and empty).
*/

// - My Solution:
class MyQueue {
private:
    stack<int> s1, s2;
    
    
public:
    MyQueue() {}
    
    void push(int x) {
        s1.push(x);
    }
    
    int pop() {
        
        //use peek() to get top value stack or first in queue and remove it
        int topVal = peek();
        
        s2.pop();
        
        return topVal;
    }
    
    int peek() {
        
        //if second stack is empty, we reverse order of elements in stack one and push into stack 2 to get top element -> first in queue
        if (s2.empty()) {
            
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }
        
        return s2.top();
    }
    
    bool empty() {
        //checks to see if both stacks are empty
        return s1.empty() && s2.empty();
    }
    
};
