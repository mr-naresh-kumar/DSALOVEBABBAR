#include<iostream>
#include<queue>
#include<map>

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
  int searchInorder(int inOrder[], int size, int target){
    for(int i  =0; i<size; i++){
        if(inOrder[i] ==  target){
            return i;
        }

    }
    return -1;
  }


void createMapping(int inorder[], int size, map<int, int> &valueToIndexMap){
    for(int i =0; i<size; i++){
        int element  = inorder[i];
        int index = i;
        valueToIndexMap[element] = index;
    }
}

     Node* constructTreeFromPreAndInorderTraversal( map<int, int> &valueToIndexMap, int preOrder[], int inOrder[], int &preIndex, int inOrderStart, int inOrderEnd, int size ){
        // base case 
        if(preIndex >= size || inOrderStart>inOrderEnd){
            return NULL;
        }


        // 1 case  main solve krta hu
        int element = preOrder[preIndex];
        preIndex++;

        Node*root  = new Node(element);

        // element search krna padega inorder me 
        // int position = searchInorder(inOrder, size, element);

        int position = valueToIndexMap[element];
        
        
        //  baaki   recursion smabhal lega;
        root->left = constructTreeFromPreAndInorderTraversal(valueToIndexMap,  preOrder, inOrder, preIndex,inOrderStart, position-1, size);


        root->right = constructTreeFromPreAndInorderTraversal( valueToIndexMap, inOrder, preIndex, position+1, inOrderEnd, size);
  return root;
     };


    Node* constructTreeFromPostAndInorderTraversal( map<int, int> &valueToIndexMap, int postorder[], int inorder[], int &postIndex, int inorderStart, int inorderEnd, int size){
        if(postIndex<0 || inorderStart >inorderEnd){
            return NULL;
        }

        //  1 case m slove jrunge 
        int element = postorder[postIndex];
        postIndex--;
        Node*root = new Node(element);

        // search karo inorder me 
        int position = valueToIndexMap[element];

        // baaki resursion ambhal lega 

        // right ki call phle lagegi 
        root->right =  constructTreeFromPostAndInorderTraversal(valueToIndexMap, postorder, inorder, postIndex, position+1, inorderEnd, size);

         root->left =  constructTreeFromPostAndInorderTraversal(valueToIndexMap, postorder, inorder, postIndex, inorderStart, position-1, size);
return root;
    }

int main(){
    // int inOrder[] = {10, 8,6,2,4,12};
    // int preOrder[] = {2, 8, 10, 6, 4,12};
    // int size = 6;
    // int preOrderIndex = 0;
    // int inOrderStart = 0;
    // int inorderEnd = 5;
    // map<int, int> valueToIndexMap;
    // createMapping(inOrder, size, valueToIndexMap);

    // Node*root = constructTreeFromPreAndInorderTraversal(valueToIndexMap, preOrder,inOrder, preOrderIndex, inOrderStart, inorderEnd, size);

    // cout<< " Pringting the entire tree" << endl;

    // levelOrderTraversal(root);

    int inorder[] = {8,14,6,2,10,4};
    int postorder[] = {8,14,6,2, 10,4};
    int size =6;
    int postIndex = size-1;
    int inorderStar = 0;
    int inorderEnd = size-1;

    map<int, int> valueToIndexMap;
    createMapping(inorder, size, valueToIndexMap);

    Node*root = constructTreeFromPostAndInorderTraversal(valueToIndexMap, postorder, inorder, postIndex, inorderStar, inorderEnd, size);
    cout<< "Printing the entire tree:" << endl;

    levelOrderTraversal(root);
    return 0;
}