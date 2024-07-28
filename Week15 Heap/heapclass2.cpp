#include<iostream>
#include<queue>
#include<climits>
#include<algorithm>


using namespace std;

int  getKthSmallestElement(int arr[], int n, int k){
    priority_queue<int>pq;
    // first k element  ko process kro 

    for(int i =0; i<k; i++){
        int element = arr[i];
        pq.push(element);
    }
    // remaingin element ko tabhi insert karege jab vo root se choote hoge 
    for(int i =k; i<n; i++){
        int element  = arr[i];
        if(element <pq.top()){
            pq.pop();
            pq.push(element);
        }

    }
    int ans  = pq.top();
    return ans;

}

int getKthGreatestElement(int arr[], int n, int k){


     priority_queue<int, vector<int>, greater<int>>pq;
    // first k element  ko process kro 

    for(int i =0; i<k; i++){
        int element = arr[i];
        pq.push(element);
    }
    // remaingin element ko tabhi insert karege jab vo root se choote hoge 
    for(int i =k; i<n; i++){
        int element  = arr[i];
        if(element >pq.top()){
            pq.pop();
            pq.push(element);
        }

    }
    int ans  = pq.top();
    return ans;

}
// CBT  is valid heap or not 

class Node {
    public:
    int data;
    Node* left;
    Node*right;
};

class Info{
    public:
    int maxVal;
    bool isHeap;
    Info(int a, bool b ){
        this->maxVal = a;
        this->isHeap =b;

    }

};


Info checkMaxHeap(Node* root){
    // base case 
    if(root == NULL){
       return Info(INT_MIN, true);
    }
    if(root->left == NULL && root->right ==NULL){
       return Info(root->data, true);
    };
    Info leftAns = checkMaxHeap(root->left);
    Info rightAns = checkMaxHeap(root->right);

    // 1 case mughe solve karnah 

    if(root->data > leftAns.maxVal && root->data>rightAns.maxVal&& leftAns.isHeap && rightAns.isHeap){
        return Info(root->data, true);
    }
    else{
        int currentMax =
        std::max(root->data, std::max(leftAns.maxVal, rightAns.maxVal));
      
    return Info(currentMax, false);  
    }
};





void storeInorderTraversal(Node* root, vector<int>&in){
    if(root == NULL){
        return;
    }
    // LNR

    storeInorderTraversal(root->left, in);
    in.push_back(root->data);
    storeInorderTraversal(root->right, in);
}


 void replaceUsingPostOrder(Node* root, vector<int> in, int &index){
    if(root == NULL){
        return;
    }
    // LRN 

    replaceUsingPostOrder(root->left, in, index);
    replaceUsingPostOrder(root->right,in, index);
    root->data  = in[index];
    index++;
 }


Node* convertBSTaIntoMaxHeap(Node* root){

    // 1 step: store inorder

    vector<int> inorder;

    storeInorderTraversal(root, inorder);
    // replace the node values with the sorted inorder values, using the postorder traversal 
    int index =0;

    replaceUsingPostOrder(root, inorder, index);
    return root;

}


int main(){

Node* root = NULL;
// createBST(root);



    // create max-heap 
//     priority_queue<int> pq;
//     // insertion 
//     pq.push(10);
//     pq.push(20);
//     pq.push(30);
//     pq.push(40);
//     pq.push(50);

//     cout<< "Top element of Heap "<< pq.top() << endl;

//     pq.pop();
//      cout<< "Top element of Heap "<< pq.top() << endl;
// cout<< "Size of max heap:" << pq.size() << endl;
// if(pq.empty()){
//     cout<<"Empty" <<endl;
// }
// else{
//     cout<< "not empty" << endl;
// }


// min heap cration 

//  priority_queue<int, vector<int>, greater<int>> pq;
// //  insertion

// pq.push(100);
// pq.push(90);
// pq.push(70);

// cout<< "Top element of heap:" << pq.top() << endl;

// pq.pop();

// cout<< "Top element of heap:" << pq.top() << endl;
// cout << "size:" <<  pq.size()<< endl;



// kth smallest elemt of array 
// int arr[] = {3,5,4,6,9,8,7};
// int n =7;
// int k =3;

// cout<<"3th greatest number is:" <<  getKthGreatestElement(arr,n,k) << endl;

// cout<<"4th Smallest number is:" <<  getKthSmallestElement(arr,n,k) << endl;

    return 0;
}