#include<iostream>

#include<queue>
using namespace std;

class Node{
    public:
    int data;
    int children_count;
    Node** children;


    Node(int value){
        this->data = value;
        this->children_count =0;
        this->children = 0;
    }
};


Node* takeInput(){
    int data, count;
    cout<<"Enter root data";
    cin>> data;
    cout<< "Enter Children count for" <<data<< "node";
    cin>> count;
    Node*root = new Node(data);
    root->children_count = count;
    root->children =  new Node*[count]; // array to store links to children
for(int i = 0; i<count; i++)
    root->children[i] = takeInput();
    return root;

}


void levelOrderPrint(Node*root){
    queue<Node*> q;
    q.push(root);
    q.push(0);

    while(!q.empty()){
        auto front  = q.front();
        q.pop();
        if(front == NULL){
            cout<< endl;
            if(!q.empty())
            q.push(NULL); 
        }
        else{
            cout<< front->data<<" ";
        for(int i =0; i<front->children_count; i++){
            if(front->children[i]){
             q.push(front->children[i]);   
            }
        }
        }
    }
}

int main(){

    Node* root = takeInput();
    levelOrderPrint(root);
    return 0;
}