#include<iostream>
#include<queue>

using namespace std;

class Node{
    public:
     int data;
     Node* left;
     Node* right;

     Node(int val){
        this->data = val;
        this->left = NULL;
        this->right = NULL;

     }
};
// it returns root node of the create tree 
     Node* createTree(){

        cout<< "Enter the value for Node:" <<endl;
        int data;
        cin>>data;
        if(data == -1) {
        return NULL;
        }
// Step1: create Node
        Node* root = new Node(data);

        // step 2: create left subtree
        cout<< "left of Node:" << root->data << endl; 
        root->left = createTree();
        // step3 : create right subtree 
         cout<< "right of Node:" << root->data << endl; 
        root->right = createTree();
        return root;
        

     };

     void preOrderTraversal(Node * root){
        // base  case 
        if(root == NULL ){
            return;
        }

        // N L R 
        // N 
        cout<< root->data << " ";
        // L
        preOrderTraversal(root->left);
        // R 
        preOrderTraversal(root->right);



     }

     void inorderTraversal(Node* root){
        // LNR 
        // base case 
        if(root == NULL){
            return;
        }
        //  L 
        inorderTraversal(root->left);
        // N 
        cout<< root->data << " ";
        // R 
        inorderTraversal(root->right);

     }

     void postOrderTraversal(Node* root){
        // LRN 

        // base case  
        if(root == NULL){
            return;
        }
    //    L 
        postOrderTraversal(root->left);
        // R
                postOrderTraversal(root->right);
                // N
        cout<< root->data  << " ";

     }

     void levelOrderTraversal(Node*root){
      
      queue<Node*>q;
      q.push(root);
      q.push(NULL);


      while(!q.empty()){
        Node* front = q.front();
        q.pop();

        if(front == NULL){

            cout<< endl;
            if(!q.empty()){
                q.push(NULL);

            }
            q.push(NULL);

        }
        else{
            // valid node wala case 

             cout << front->data << " ";

        if(front->left != NULL){
            q.push(front->left);
        }
        if(front->right != NULL){
            q.push(front->right);
        }
        }

       
      }
     }

int main(){
    Node* root  = createTree();
    // cout<< root->data << endl;

    // cout<< "Printing Preorder:";
    //  preOrderTraversal(root);
    //  cout<< endl;

    //  cout<< "Printing Inorder:";
    //  inorderTraversal(root);
    //  cout<< endl;

    //  cout<< "Printing postOrder:";
    //  postOrderTraversal(root);
    //  cout<< endl;

    cout<< "Level Order:";
     levelOrderTraversal(root);
     cout<< endl;

    return 0;
}
