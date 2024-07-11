#include<iostream>

using namespace std;

class KQueue{
    public:
    int n, k, freeSpot;
    int *arr, *front, *rear, *next;
    KQueue(int _n, int _k):n(_n),k(_k), freeSpot(0){
        arr = new int[n];
        next = new int[n];
        front = new int[k];
        rear = new int[k];
        for(int i =0; i<k; i++)
            front[i] = rear[i] =-1;
            for(int i =0; i<n; i++)
                next[i] = i +1;
                next[n-1] = -1;
            
        
    }

    // push x into  qith Queue

    bool push(int x, int qi){
        // overflor 
        if(freeSpot == -1){
            return false;
        }

        // find frist free index 
        int index = freeSpot;
        // updated freeSpot 

        freeSpot = next[index];

        //if first element in qi
        if(front[qi] == -1){
            front[qi] = index;
        }
        else{
            // link new element to that Q's rearest element 
            next[rear[qi]] = index;
        }
        // updated next 

        next[index] = -1;

        // updated rear 
        rear[qi] = index;
        arr[index] = x;
         return true;
    }
// pop element from ith queue
    int pop(int qi){
        // underflow 
        if(front[qi] == -1){
            return -1;
        }
        // find index to pop 
    int index = front[qi];
    // front updated 
    front[qi] = next[index];

    // update freespot 
    next[index] = freeSpot;
    freeSpot = index;

    return arr[index];

    }
    ~KQueue(){
        delete ;
    }



};

int main(){
    return 0;

}