#include<iostream>
#include<queue>
#include<vector>
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

Node* createTree(){

    cout<< "Enter the value for Node:";
    int value;
    cin>> value;
    if(value == -1){
        return NULL;
    }

    // create node 
    Node* root = new Node(value);

    cout << "Entering in left of :" << value<< endl;
    root->left = createTree();
    cout<< "Entering the right of:" << value<< endl;
    root->right = createTree();
    return root;
}

void preOrder(Node* root){
    if(root ==  NULL)
    return;
    cout << root->data<< " ";
    preOrder(root->left);
    preOrder(root->right);
}

void inOrder(Node* root){
    if(root ==  NULL)
    return;
    inOrder(root->left);
    cout << root->data<< " ";
    inOrder(root->right);
}


void postOrder(Node* root){
    if(root ==  NULL)
    return;
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data<< " ";
};

void levelOrderTraversal(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    cout<< endl;

    if(root == NULL )
    return;

while (!q.empty()){
    Node* temp = q.front();
    q.pop();
    if(temp == NULL){
       cout<< endl;
       if(!q.empty()){
        q.push(NULL);
       }
    }else{
        cout<< temp->data << " ";

        if(temp->left != NULL){
            q.push(temp->left);
        }
        if(temp->right != NULL){
            q.push(temp->right);
        }

    }
}

}

void printLeftView(Node* root , int level, vector<int> & leftView){
    if(root == NULL)
    return;


if(level == leftView.size()){
// iska mtlb left view ki node mil gyi h 

leftView.push_back(root->data);
}
printLeftView(root->left,level+1, leftView);

printLeftView(root->right, level+1, leftView);




};


void printRightView(Node* root , int level, vector<int> & rightview){
    if(root == NULL)
    return;


if(level == rightview.size()){
// iska mtlb right view ki node mil gyi h 

rightview.push_back(root->data);
}
printRightView(root->right, level+1, rightview);
printRightView(root->left,level+1, rightview);





};


void printTopView(Node* root ){
    map<int, int> hdToNodemap;

    queue<pair<Node*, int>>q;
    if(root == NULL)
    return;

    q.push(make_pair(root, 0));
    while(!q.empty()){
        pair<Node*, int> temp= q.front();
        q.pop();

        Node* frontNode = temp.first;
        int hd = temp.second;
// if there is no entry for hd in map , then create a new entry 
        if(hdToNodemap.find(hd) == hdToNodemap.end()){

            hdToNodemap[hd] = frontNode->data;

        }
        // child ko dekhna h 

        // if(frontNode->left != NULL){
        //     q.push(make_pair(frontNode->left, hd-1))};
        if(frontNode->left != NULL){
            q.push(make_pair(frontNode->left, hd-1));

        }


            if(frontNode->right != NULL){
            q.push(make_pair(frontNode->right, hd+1));
        }

    }

    // cout<< "printing top view " << endl;

    // for(auto i:hdToNodemap){
    //     cout<< i.second << " ";
    // }



};



void printBottomView(Node* root ){
    map<int, int> hdToNodemap;

    queue<pair<Node*, int>>q;
    if(root == NULL)
    return;

    q.push(make_pair(root, 0));
    while(!q.empty()){
        pair<Node*, int> temp= q.front();
        q.pop();

        Node* frontNode = temp.first;
        int hd = temp.second;
// if there is no entry for hd in map , then create a new entry 
// overwrite answer so that the deeper nodes can be stored 
            hdToNodemap[hd] = frontNode->data;

    
        // child ko dekhna h 

        
        if(frontNode->left != NULL){
            q.push(make_pair(frontNode->left, hd-1));

        }


            if(frontNode->right != NULL){
            q.push(make_pair(frontNode->right, hd+1));
        }

    }

    cout<< "printing bottom view " << endl;

    for(auto i:hdToNodemap){
        cout<< i.second << " ";
    }



};
void printLeftBoundary(Node* root){
    if(root ==  NULL){
        return;
    }
    if(root->left == NULL && root->right == NULL){
        return;
    }
    cout<< root->data << " ";
    if(root->left != NULL){
        printLeftBoundary(root->left);
    }else{
        printLeftBoundary(root->right);
    }
}



void printRightBoundary(Node* root){
    if(root ==  NULL){
        return;
    }
    if(root->left == NULL && root->right == NULL){
        return;
    }
    if(root->right != NULL){
        printRightBoundary(root->right);
    }else{
        printRightBoundary(root->left);
    }
    cout<< root->data << " ";
}
void printLeafBoundary(Node* root){
    if(root ==  NULL)
    return;

    if(root->left == NULL && root->right ==  NULL){
        cout<< root->data << " ";
    }
    printLeafBoundary(root->left);
    printLeafBoundary(root->right);
}

void boundaryTraversal(Node* root){
    if(root== NULL)
    return;
cout<< root->data << " ";
    printLeftBoundary(root->left);
    printLeafBoundary(root->left);
    printLeafBoundary(root->right);
    printRightBoundary(root->right);
//     if(root->right != NULL){
// printRightBoundary(root->right);

//     }
//     else{

//     printRightBoundary(root->left);
//     }


}

 int main(){
    Node* root = createTree();
    levelOrderTraversal(root);

boundaryTraversal(root);


// vector<int> leftView;
// printLeftView(root, 0,leftView);
// cout<< "printign left view " << endl;

// for(int i: leftView){
//     cout<< i << " ";
// }
// cout<< endl;

// vector<int> rightview;

// printRightView(root, 0 , rightview);

// cout<< "Printing the right view " << endl;

// for(int i : rightview){ 
//     cout<< i << " ";
// }

// printTopView(root);
printBottomView(root);

    // cout<< root;
    return 0;
 }