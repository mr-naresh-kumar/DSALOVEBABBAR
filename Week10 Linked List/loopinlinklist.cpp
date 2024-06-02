#include<iostream>


// #include <iostream>
// #include <ctime>
#include <string>
// #include <Windows.h>
// #include <cstdlib>
// #include <stdlib.h>
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
        cout  << temp->data << " ->";
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
        cout<< "Cannot delete , cox ll is empty"<< endl;
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

Node* reverse(Node* &head){
    Node*prev = NULL;
    Node*curr = head;
    while(curr!= NULL){
        Node*next = curr->next;
        curr->next = prev;
        prev= curr;
        curr = next;

    }
    return prev;


}

void addOne(Node* &head){
    // reverse 
    head = reverse(head);

    // add 1
    int carry = 1;
    Node*temp = head;
    while(temp->next != NULL){
        int totalSum = temp->data +carry;
        int digit = totalSum %10;
        carry = totalSum/10;

        temp->data = digit;
        temp = temp->next;
        if(carry == 0){
            break;
        }
    }
    if(carry != 0){
    int totalSum = temp->data+carry;
    int digit = totalSum %10;
    carry = totalSum/10;
    temp->data = digit;
    if(carry!=0){
        Node*newNode = new Node(carry);
        temp->next = newNode;
    }


    }
    // process last node 
    // reverse 
    head = reverse(head); 
}

Node* reverseInKGroup(Node* &head,int k){

    // if(head ==NULL){
    //     return head ;
    // }
    // if(head->next == NULL){
    //     return head;
    // }

    // // 1 case solve karuga 

    // Node*Prev = NULL;
    // Node*curr = head;
    // Node*nextNode = curr->next;
    // Node*prev = NULL;
    // int pos = 0 ;
    // while(pos<k){
    //     nextNode = curr->next;
    //     curr->next = prev;
    //     prev= curr;
    //     curr = nextNode;
    //     pos++;
        
    // }
    // Node*recursionAns = NULL;
    // if(nextNode != NULL){
    // recursionAns = reverseInKGroup(nextNode, k);
    //     nextNode->next = prev;
    // }
    // return recursionAns;



 
//     int getLength(Node*&head){
//     Node*temp = head;
//     int len =0;
//     while(temp!=NULL){
//         len++;
//         temp= temp->next;
//     }
//     return len;
// }
//     Node* reverseKGroup(Node* head, int k) {

//          if(head ==NULL){
//         return head ;
//     }
//     if(head->next == NULL){
//         return head;
//     }

//     // 1 case solve karuga 

//     Node*Prev = NULL;
//     Node*curr = head;
//     Node*nextNode = curr->next;
//     Node*prev = NULL;
//     int pos = 0 ;

//     int len = getLength(head);
//     if(len<k){
//         return head;
//     }

//     while(pos<k){
//         nextNode = curr->next;
//         curr->next = prev;
//         prev= curr;
//         curr = nextNode;
//         pos++;
        
//     }
//     Node*recursionAns = NULL;
//     if(nextNode != NULL){
//     recursionAns = reverseKGroup(nextNode, k);
//         head->next = recursionAns;
//     }
//     return prev;
        
//     }

}

Node* Solve(Node*&head){
    if(head==NULL){
        return head;
    }
    if(head->next == NULL){
        return head;
    }

    Node * temp = head;
    while(temp!=NULL){
        if(temp->next!=NULL && temp->data ==temp->next->data){
Node*nextNode = temp->next;
temp->next = nextNode->next;
nextNode->next = NULL;
delete nextNode;

        }
        else{
            temp= temp->next;
        }
    }
    return head;
}

int main(){
   Node *head = NULL;
   Node* tail = NULL;
   insertAtHead(head, tail, 1);
   insertAtHead(head, tail, 2);
   insertAtHead(head, tail, 2);
   insertAtHead(head, tail, 5);
   insertAtHead(head, tail, 6);


    print(head);
   cout << endl;

//    addOne(head);
// reverseInKGroup(head);
   print(head);
   cout<< endl;
//    insertAtHead(head, tail, 90);
//    insertAtTail(head, tail, 77);

//    tail->next = head->next->next;
//   cout << getStartingPoint(head)->data<< endl;


  

//    insertAtTail(head, tail, 1000);
// insertAtPosition(head, tail, 1000, 6);

//    print(head);
//    cout<< endl;

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