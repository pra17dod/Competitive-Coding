class MyStack {
public:
    queue <int> q;
    int t = -1;
    
    MyStack() {
        
    }
    
    void push(int x) {
        t = x;
        q.push(x);
    }
    
    int pop() {
        int n = q.size();
        while (--n) {
            t = q.front();
            q.pop();
            q.push(t);
        }
        int rt = q.front();
        q.pop();
        return rt;        
    }
    
    int top() {
        return t;
    }
    
    bool empty() {
        return q.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */