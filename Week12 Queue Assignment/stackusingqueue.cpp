// 2 queue using 

#include <queue>
using namespace std;

class MyStack {
public:
    queue<int> q1, q2;
    
    MyStack() {
        // Constructor initializes two empty queues
    }
    
    void push(int x) {
        // Push the new element to q2
        q2.push(x);
        
        // Transfer all elements from q1 to q2
        while (!q1.empty()) {
            q2.push(q1.front());
            q1.pop();
        }
        
        // Swap q1 and q2 to keep q1 as the main queue
        swap(q1, q2);
    }
    
    int pop() {
        // Pop the front element from q1, which is the top of the stack
        int top = q1.front();
        q1.pop();
        return top;
    }
    
    int top() {
        // Return the front element of q1, which is the top of the stack
        return q1.front();
    }
    
    bool empty() {
        // Check if q1 is empty
        return q1.empty();
    }
};

// 1queue using  


#include <iostream>
#include <queue>

using namespace std;

class MyStack {
public:
    queue<int> q;

    MyStack() {
        // Constructor
    }
    
    void push(int x) {
        q.push(x);
        // Rotate the queue to place the new element at the front
        for (int i = 0; i < q.size() - 1; i++) {
            int front = q.front();
            q.pop();
            q.push(front);
        }
    }
    
    int pop() {
        int top = q.front();
        q.pop();
        return top;
    }
    
    int top() {
        return q.front();
    }
    
    bool empty() {
        return q.empty();
    }
};

int main() {
    MyStack stack;
    
    stack.push(1);
    stack.push(2);
    stack.push(3);
    
    cout << "Top element: " << stack.top() << endl; // Should print 3
    
    cout << "Popping top element: " << stack.pop() << endl; // Should print 3
    cout << "Top element: " << stack.top() << endl; // Should print 2
    
    cout << "Popping top element: " << stack.pop() << endl; // Should print 2
    cout << "Top element: " << stack.top() << endl; // Should print 1
    
    cout << "Popping top element: " << stack.pop() << endl; // Should print 1
    
    cout << "Is stack empty? " << (stack.empty() ? "Yes" : "No") << endl; // Should print Yes
    
    return 0;
}

