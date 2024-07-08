#include<iostream>
#include<stack>
#include<queue>

using namespace std;
void reverseQueue(queue<int> &q){
    stack<int> s;
// one by one queue se element le and stack me dalo  
while(!q.empty()){
    int frontElement = q.front();
    q.pop();
    s.push(frontElement);
}

// one stack selo and queue me push karo 

while(!s.empty()){
    int element = s.top();
    s.pop();
    q.push(element);
}


};

void reverse(queue<int> &q){
    // base case 
    if(q.empty()){
        return;
    }
    int element = q.front();
    q.pop();
    reverse(q);
    q.push(element);
    return;

}

void reverseFirst(queue<int> &q ,int k){
    stack<int>s;


    if(k>q.size() || k ==0){
        return;
    }
    // push first k emelment into stack 

    for(int i =0; i<k; i++){
        int temp = q.front();
        q.pop();
        s.push(temp);
    }
    // push all k element into queue 
    while (!s.empty()){
        int temp = s.top();
        s.pop();
        q.push(temp);
    }
    

    // pop and push first (n-k) elements into queue again 
    for(int i =0; i<(q.size() - k); i++){
        int temp = q.front();
        q.pop();
        q.push(temp);

    }

};

void interLeaveQueue(queue<int> &first){
    queue<int> second;

    // PUSH FIRST HALF OF FIRST QUEUE IN SECOND QUEUE 

int size = first.size();
for(int i =0; i<size/2; i++ ){
    int temp = first.front();
    first.pop();

    second .push(temp);

}
//   merge botht the havles 
// into the originale queue - names as first 

for(int  i=0; i<size/2; i++){
    int temp = second.front();
    second.pop();
    first.push(temp);

    temp = first.front();
    first.pop();
    first.push(temp);
}




}

int main(){


    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30); 
    q.push(40);
    q.push(50);
    // q.push(60);

// reverseFirst(q,4);
interLeaveQueue(q);
// reverse(q);
    // reverseQueue(q);
    cout<< "Printing Queue:"  << endl;
    while(!q.empty()){
        int element = q.front();
        q.pop();
        cout<< element << " ";

    }


    return 0;
}