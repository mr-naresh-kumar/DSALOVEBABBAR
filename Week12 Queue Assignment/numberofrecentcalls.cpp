#include <iostream>
#include <queue>

using namespace std;

class RecentCounter {
    queue<int> q;
public:
    RecentCounter() {        
    }
    
    int ping(int t) {
        // 1. Push the value
        q.push(t);
         
        // 2. Pop invalid requests older than t - 3000
        while(!q.empty() && q.front() < (t - 3000)) {
            q.pop();
        }

        // 3. Now the queue has only the number of recent calls in the range [t - 3000, t]
        return q.size();
    }
};

int main() {
    RecentCounter rc;

    // Example pings
    cout << rc.ping(1) << endl;     // Expected output: 1
    cout << rc.ping(100) << endl;   // Expected output: 2
    cout << rc.ping(3001) << endl;  // Expected output: 3
    cout << rc.ping(3002) << endl;  // Expected output: 3
    cout << rc.ping(7000) << endl;  // Expected output: 1

    return 0;
}
