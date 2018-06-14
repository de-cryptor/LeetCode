/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/
class MinStack {
public:
    /** initialize your data structure here. */
    stack<int> s,mins;
    MinStack() {
        
    }
    
    void push(int x) {
        if(s.empty())
        {
            s.push(x);
            mins.push(x);
        }
        else
        {
            if(mins.top() > x)
            {
                mins.push(x);
                s.push(x);
            }
            else
            {
                mins.push(mins.top());
                s.push(x);
            }
        }
    }
    
    void pop() {
        mins.pop();
        s.pop();
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return mins.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack obj = new MinStack();
 * obj.push(x);
 * obj.pop();
 * int param_3 = obj.top();
 * int param_4 = obj.getMin();
 */