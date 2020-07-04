class MinStack {
public:
    /** initialize your data structure here. */
    stack<int> a,b;
    
    MinStack() { //생성자
        
    }
    
    void push(int x) {
        a.push(x);
        if(b.empty())
            b.push(x);
        else{
            int pastMin = b.top();
            if(x < pastMin)
                b.push(x);
            else
                b.push(pastMin);
        }
  
    }
    
    void pop() {
        a.pop();
        b.pop();
    }
    
    int top() {
        return a.top();
    }
    
    int getMin() {
        return b.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */


/*
Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.
스택을 설계한다 

[null,null,null,null,-3,null,0,0]
[null,null,null,null,-3,null,0,-2]
-2???? getmin

Last executed input
["MinStack","push","push","push","getMin","top","pop","getMin"]
[[],[-2],[0],[-1],[],[],[],[]]

*/