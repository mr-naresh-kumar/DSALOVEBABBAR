#include <iostream>
#include <stack>

using namespace std;

class MyQueue {
public:
    stack<int> s1, s2;

    MyQueue() {
        // Constructor
    }
    
    void push(int x) {
        s1.push(x);
    }
    
    int pop() {
        int pop = -1;
        if (!s2.empty()) {
            pop = s2.top();
            s2.pop();
        } else {
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
            pop = s2.top();
            s2.pop();
        }
        return pop;
    }
    
    int peek() {
        int front = -1;
        if (!s2.empty()) {
            front = s2.top();
        } else {
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
            front = s2.top();
        }
        return front;
    }
    
    bool empty() {
        return s1.empty() && s2.empty();
    }
};

int main() {
    MyQueue queue;
    
    queue.push(1);
    queue.push(2);
    queue.push(3);
    
    cout << "Front element: " << queue.peek() << endl; // Should print 1
    cout << "Popping front element: " << queue.pop() << endl; // Should print 1
    cout << "Front element: " << queue.peek() << endl; // Should print 2
    
   cout << "Popping front element: " << queue.pop() << endl; // Should print 3
    cout << "Is queue empty? " << (queue.empty() ? "Yes" : "No") << endl; // Should print Yes
    
    return 0;
}