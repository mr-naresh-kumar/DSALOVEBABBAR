#include<iostream>

#include<deque>

using namespace std;

// implement to doubly ended queue 

class Deque{
    public:
    int *arr;
    int size;
    int front;
    int rear;

    Deque(int size){
        arr = new int[size];
        this->size = size;
        front = -1;
        rear =-1;
    }

    void pushBack(int val){

        // overflow 
        // empty case 
        // normal flow

        if((front == 0 && rear == size-1) || (rear== front-1)){
            cout<< "Overflow"<< endl;
        }
        else if(front == -1 && rear == -1){
            front++;
            rear++;
            arr[rear] = val;
        }
        else if(rear == size-1 && front!=0){
            rear =0;
            arr[rear] = val;
        }
        else{
            rear++;
            arr[rear] = val;
        }

    }

    void pushFront(int val){

        if((front == 0 && rear == size-1) || (rear== front-1)){
            cout<< "Overflow"<< endl;
        }
        else if(front == -1 && rear == -1){
            front++;
            rear++;
            arr[front] = val;
        }
        else if(front == 0 && rear != size-1){
            front = size-1;
        arr[front] = val;
        }
        else{
            front--;
            arr[front] = val;
        }

    }


    

    void popFront(){
        // underflow 
        if(front == - 1 && rear == -1){
            cout << "Underflow" << endl;
            return;
        }
        else if(front == rear){
            // empty case - > single element 
            arr[front] =-1;
            front =-1;
            rear =-1;
        }
        else if(front == size-1){
            arr[front] = -1;
            front =0;
        }

        else{
            // normal case 
            arr[front] == -1;
            front++;
        }

    }
    void popBack(){

        // underflow 
        // singel element   
        // normal case  
        if(front ==  -1 &&  rear ==-1){
            cout<< "Underflow" << endl;

        }
        else if( front == rear){
            arr[rear] = -1;
            front = -1;
            rear = -1;
        }
        else if(rear ==0 ){
            arr[rear]  = -1;
            rear = size -1;

        }
        else{
            arr[rear] = -1;
            rear--;
        }


    }
};

int main(){
    // deque<int> dq;
    // dq.push_back(10);
    // dq.push_front(20);
    // // dq.pop_back();
    // dq.pop_front();
    // cout<< dq.front() << endl;
    // cout<< dq.back() << endl;
    // cout<< dq.size() << endl;
    return 0;
}