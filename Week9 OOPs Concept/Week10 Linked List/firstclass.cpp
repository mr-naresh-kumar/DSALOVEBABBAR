#include<iostream>
using namespace std;

class Node{
    public: 
    int data;
    Node*next;

    Node(){
        cout << " I am iside default constructor  " << endl;
        this->next = NULL;
    }
    Node(int data){
          cout << " I am iside parameter constructor  " << endl;
        this->data = data;
        this->next = NULL;
    }
};

void printLL(Node*head){
    Node * temp  = head;

    while(temp != NULL){
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout<< endl;

}

int getLength (Node * head){
    Node * temp = head;
        int count = 0;

    while(temp != NULL){
         count++;
         temp = temp->next;
    }
    return count;

}

void insertAtHead(Node* &head, Node* &tail, int data){


    if(head == NULL){
        // empty LL 

        // step1: update new node 
        Node*newNode = new Node(data);

        // step2 : update head 
        head = newNode;
        tail = newNode;
    }
    else{
        // non-empty LL wala case
    // create a new node 

    Node * newNode = new Node(data);

    // attach new node to head node 

    newNode -> next = head;

    // update the head 
    head = newNode;
    }



};

void insertAtTail(Node* &head, Node* &tail, int data){
    if(head == NULL){
        // empty LL case 
        // step create toh karo node 
        Node* newNode = new Node(data);
        // step2: single node h entire list me, t
        // that's why head and tail ko ispar point jarwasdo 
        head =  newNode;
        tail = newNode;
    }
    else{
        // noo-empty LL 
        // step1: create new node 
    Node* newNode = new Node(data);

    // step2:tail node ko attach karo newNode se
    tail->next = newNode;

    // step3:  uodate the tail
    tail = newNode;
    }
}


void createTail(Node* head, Node* &tail){
    Node*temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }

    // jb ye loop khtam hogya hoa 
    // then aapka temp wala pointer 
    // kahade hoga last node par 
    // tb tail = tmep krke , tail ko last node pr le aaao 
    tail= temp;
}

void insertAtPosition(Node* &head, Node* &tail, int data, int position){
    if(position < 1){
        cout << "Cannot isert , please enter a vail position " << endl;
        return ;


    }
    int length = getLength(head);
    if(position > length){
          cout << "Cannot isert , please enter a vail position " << endl;
        return ;

    }
    if(position == 1){
        insertAtHead(head, tail, data);
    }
    else if(position == length + 1){
        insertAtTail(head, tail, data);
    }
    else{
        // insert at middle of linked list .
        // step1: create a new Node 
        Node* newNode = new  Node(data);
        // step2 :  traverse pre // cirr to position 
        Node * prev  = NULL;
        Node * curr = head; 
        while(position != 1){
            prev = curr;
            curr = curr->next;
            position--;
        }
        // step3: 
        prev-> next = newNode;

        // step4:attach  newNode to curr 

        newNode -> next = curr; 
    }
}

int main(){


    Node* head = NULL;
    Node* tail = NULL;
    insertAtTail(head, tail,10);
    insertAtTail(head, tail,20);
    insertAtTail(head, tail,30);
    insertAtTail(head, tail, 50);
    printLL(head);

    insertAtPosition(head, tail, 5,4);
    printLL(head);

    // createion of Node 

    // // Node a;
    //   Node * first = new Node(10);
    //    Node * second = new Node(20);
    //     Node * third = new Node(30);
    //      Node * fourth = new Node(40);
    //       Node * fifth = new Node(50);
    //       Node* tail = fifth;


    //       first -> next = second;
    //       second->next = third;
    //       third->next =  fourth;
    //       fourth->next = fifth;

    //     //   linked list  create ho chuki h 

    //     Node*head = first;

    //     // cout << "Printing the entire LL:" << endl;
    //     // printLL(head);
    //     // cout << "Length of  LL is " << getLength(head);
    //     cout << "Printing the entire LL" << endl;
    //     printLL(head);

    //     // insertAtHead(head,tail,500);
    //     insertAtTail(head,tail,500);
    //     printLL(head); 
          
         
    return 0;
}

