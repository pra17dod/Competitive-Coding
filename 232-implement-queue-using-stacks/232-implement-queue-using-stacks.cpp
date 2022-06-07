class MyQueue {
public:
    stack <int> a, b;
    int pk;

    MyQueue() {
        a, b, pk;
    }
    
    void push(int x) {
        if (a.empty())
            pk = x;
        a.push(x);
    }
    
    int pop() {
        while (!a.empty()) {
            b.push(a.top());
            a.pop();
        }
        int r = b.top();
        b.pop();
        if (!b.empty())
            pk = b.top();
        else pk = NULL;
        while (!b.empty()) {
            a.push(b.top());
            b.pop();
        }
        return r;
    }
    
    int peek() {
        return pk;
    }
    
    bool empty() {
        return a.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */