#include<iostream>
#include<queue>
using namespace std;


class Queue {
    public:
  int *arr;
  int size;
  int front;
   int rear;

   Queue(int size){
    arr = new int[size];
    this->size = size;
    front = -1;
    rear = -1;
   }

   void push(int val){
    // check full 

    if(rear == size -1){
    cout<< "Queue OverFlow"<< endl;
        return ;
    }
    else if(front == -1 && rear == -1){
        // empty case 
        front++;
        rear++;
        arr[rear] = val;


    }
    else{
        rear++;
        arr[rear]= val;
    }

   }

   void pop(){
    // underflow 
    if(front == -1 && rear == -1){
        cout<< "Queue Underflow"<< endl;
        return;
    }
    else if(front == rear){
        // empty case - > single elemet 

        arr[front] = -1;
        front = -1;
        rear = -1;
    }
    else{
        // normal case 
        arr[front] = -1;
        front ++;
    }
   }

   bool isEmpty(){
    if(front == -1 && rear == -1){
        return true;
    }
    else{
        return false;
    }
   }

   int  getSize(){
    if(front == -1 && rear == -1){
        return 0;
    }
    else{
    return rear - front + 1;

    }
   }


   int getFront(){
    if(front == -1){
        cout<< "No element is queue, cannot give front element " << endl;
        return -1;
    }
    else{
        return arr[front];
    }
    
   }

   int getRear(){
    if(rear == -1){
        cout<< "No element of queue can not give of  rear element";
        return -1;
    }
    else{
return arr[rear];
    }
   }

   void print(){
    cout<< "Pringing Queue:" ;
    for(int i =0; i<size; i++){
        cout<< arr[i] << " ";
    }
    cout<< endl;
   }

};


int main (){
// creation 

Queue q(5);
q.print();

q.push(10);
q.print();
q.push(20);
q.print();
q.push(30);
q.print();
q.push(40);
q.print();
q.push(50);
q.print();


cout<< "Size of Queue :" << q.getSize()  << endl;

q.pop();
q.print();

cout<< "Size of Queue :" << q.getSize() << endl;
// cout<< "Queue is empty or not " << q.isEmpty() << endl;

cout<< "get rear of  queue " << q.getRear() << endl;

// q.push(100);
// q.print();
// q.pop();
// q.pop();
// q.pop();
// q.print();
// cout<< q.getFront() << endl;
// q.pop();
// q.print();
// cout << "size of queue :" << q.getSize()  << endl;
return 0;





//     // creataion 
// queue<int> q;
// cout<< "Heloo ji kese ho sare " << endl;

// // insertation 
// q.push(5);

// // size 
// cout  
// << "Size of Queue "<< q.size() << endl;

// // empty 
// if(q.empty() == true){
//     cout<< "Queue is empty "<< endl;


// }
// else{
//     cout<< "Queue is not empty" << endl;
// }

// // remove 

// q.pop();


// q.push(10);
// q.push(20);
// q.push(30);
// // q.push(40);


// cout << "  Front element of Queue is:" << q.front() << endl;

// cout << "  Last  element of Queue is:" << q.back() << endl;
return 0;
}