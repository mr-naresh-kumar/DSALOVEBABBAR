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

    ~Node(){
        cout<< "Destuctor called  for : "<< this->data <<endl;
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


int findLength (Node * &head){
    int len = 0;
    Node * temp = head;
        // int count = 0;

    while(temp != NULL){
        //  count++;
         temp = temp->next;
         len++;
    }
    return len;

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
void deleteNode(Node* &head, Node* &tail, int position){

    // empty list 
    if(head ==NULL){
        cout<<"Cannot delete, because ll is empty" << endl;
        return;

    }
    if(head == tail){
        // single element 
        Node* temp = head;
        delete temp;
        head = NULL;
        tail = NULL;
    }
    int len = findLength(head);

    // delete from head 

    if(position ==1){
        // first node ko delter kardo 

        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;



    }
    else if(position == len){
        // last node ko delelte kar do 
        // find prev 

        Node*prev = head;
        while(prev->next!= tail){
            prev = prev->next;
        }
        // prev node ka link null karo 
        prev->next = NULL;

        // node delete kro 
        delete tail;

        // update tail 
        tail = prev; 



    }
    else{
        // middle me koi node delete kar do 


        // step1: set prev/curr pointers 

        Node* prev= NULL;
        Node*curr = head;
        while(position!=1){
            position--;
            prev = curr;
            curr = curr->next;


        }
        // step2 prev -> next me curr ka next node add kro 

        prev->next = curr->next;

        // step3  node isolate kar do 

        curr->next =  NULL;


        // step4 delete kar do  

        delete curr;


    }


}

int main(){


    Node* head = NULL;
    Node* tail = NULL;
    insertAtHead(head, tail,10);
    // insertAtHead(head, tail,20);
    // insertAtHead(head, tail,30);
    // insertAtHead(head, tail, 50);
    printLL(head);

    cout <<"Length of ll is:" << findLength(head)<< endl;
    deleteNode(head, tail, 1);
   cout <<"Length of ll is:" << findLength(head) << endl;

    // deleteNode(head, tail, 3);
    // printLL(head);

    // insertAtPosition(head, tail, 5,4);
    // printLL(head);

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

