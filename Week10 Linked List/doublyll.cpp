#include<iostream>


// #include <iostream>
#include <ctime>
#include <string>
#include <Windows.h>
#include <cstdlib>
#include <stdlib.h>
using namespace std;

class Node{
    public:
    int data;
    Node*prev;
    Node*next;

    Node(){
     this->prev = NULL;
        this->next = NULL;
    }
    Node(int data){
        this->data = data;
        this->prev = NULL;
        this->next = NULL;

    }

};

void print(Node* head){
    Node* temp  = head;
    while(temp!= NULL){
        // cout  << temp->data << " ->";
        temp = temp->next;
    }
}

int findLength(Node* &head){

    Node *temp = head;
    int len =0;
    while(temp != NULL){
        len++;
        temp = temp->next;
    }
    return len;

}

void insertAtHead(Node*&head, Node*&tail, int data ){
         // is empty 

         if(head == NULL){
            Node* newNode = new Node(data);
            head = newNode;
            tail =newNode;

         }
         else{
            // LL is not empty 
            Node * newNode = new Node(data);
            newNode ->next =  head;
            head-> prev = newNode;
            head= newNode;

         }


}


void insertAtTail(Node* &head, Node*&tail, int data){
    if (head ==  NULL){
        Node*newNode = new Node(data);
        head = newNode;
        tail = newNode;

    }

    else{
        // ll is not empty 
        Node*newNode = new Node(data);
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;

    }

}

void insertAtPosition(Node* &head, Node*&tail, int data, int position){

    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    else{
        int len = findLength(head);
        if(position == 1){
            insertAtHead(head, tail, data);
        }
        else if(position == len+1){
            insertAtTail(head, tail, data);
        }
        else{
            // inset at middle 
            // step 1  create node
              Node*newNode = new Node(data);
            //   step2 set prev and curr pointer 
            Node*prevNode = NULL;
            Node*currNode = head;
            while(position != 1){
                position--;
                prevNode =currNode;
                currNode = currNode->next;
            }
            // step3:  pointers update kar rhe the 
        prevNode->next = newNode;
        newNode->prev = prevNode;
        newNode->next = currNode;
        currNode->prev = newNode;

        }

    }

}

void deleteNode(Node*&head, Node*&tail, int position){
    if(head== NULL){
        // cout<< "Cannot delete , cox ll is empty"<< endl;
        return;
    }


if(head == tail){
Node*temp = head;
delete temp;
head = NULL;
tail = NULL;
return;
}

    int len = findLength(head);

    if(position == 1){
        // delete form head 

        Node* temp = head;
        head = head->next;
        temp ->next = NULL;
        head->prev = NULL;
        delete temp;


    }
    else if(position == len){
        // delete from tail 
        Node*prevNode = tail->prev;
        prevNode->next = NULL;
        tail->prev = NULL;
        delete tail;
        tail = prevNode;

    }
    else{
    //    delet from middle
    // step1 set prevNode/currNode/ nextNode
    Node*prevNode = NULL;
    Node*currNode = head;
    while (position != 1)
    {
        position --;
        prevNode = currNode;
        currNode = currNode->next;
    }

    Node*nextNode = currNode ->next;

    prevNode ->next = nextNode;
    currNode->prev = NULL;
    currNode->next = NULL;
    nextNode->prev = prevNode;
    

    delete currNode;
    

    }
}


bool checkLoop(Node* &head){
    Node*slow = head;
    Node*fast = head;

    while(fast!= NULL){
        fast = fast->next;
        if(fast != NULL){
            fast = fast->next;
            slow = slow->next;

        }
        // check for loop 
        if(fast == slow){
           return true;
        }
    }
    return false;

}


Node* getStartingPoint(Node* &head){
    // check for loop

    Node* slow =head;
    Node* fast = head;

    while(fast!= NULL){
        fast = fast->next;
        if(fast!=NULL){
            fast= fast->next;
            slow = slow->next;
        }
        if(fast==slow){
            break;
        }
    }
    // yha pohuch iska matlab  slow and fast meet kr chuke h 
    slow = head;

    // slow and fasat ->  1 step 

    while(fast!=slow){
        slow = slow->next;
        fast = fast->next;
    }
    // return starting point 
    return slow;
}

// void removeLoop(Node* &head){

//     Node* slow =head;
//     Node* fast = head;

//     while(fast!= NULL){
//         fast = fast->next;
//         if(fast!=NULL){
//             fast= fast->next;
//             slow = slow->next;
//         }
//         if(fast==slow){
//             break;
//         }
//     }
//     // yha pohuch iska matlab  slow and fast meet kr chuke h 
//     slow = head;

//     // slow and fasat ->  1 step 

//     while(fast!=slow){
//         slow = slow->next;
//         fast = fast->next;
//     }
//     // return starting point 
//     Node* startPoint = slow;

//     Node*temp = fast;
//     while(temp->next != startPoint){
//         temp = temp->next;
//     }
//     temp->next = NULL;

// }

int main(){
   Node *head = NULL;
   Node* tail = NULL;
   insertAtHead(head, tail, 20);
   insertAtHead(head, tail, 50);
   insertAtHead(head, tail, 60);
   insertAtHead(head, tail, 90);
//    insertAtTail(head, tail, 77);

//    tail->next = head->next->next;
//   cout << getStartingPoint(head)->data<< endl;


   print(head);
//    cout << endl;

//    insertAtTail(head, tail, 1000);
// insertAtPosition(head, tail, 1000, 6);

   print(head);

// deleteNode(head, tail, 1);
// print(head);
// cout << endl;
// deleteNode(head, tail, 1);
// print(head);

// cout << endl;

// deleteNode(head, tail, 2);
// print(head);
return 0;

}