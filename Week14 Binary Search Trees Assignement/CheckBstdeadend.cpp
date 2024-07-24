//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>

using namespace std;

struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
	
	Node(int x){
	    data = x;
	    left = NULL;
	    right = NULL;
	}
};


void insert(Node ** tree, int val)
{
    Node *temp = NULL;
    if(!(*tree))
    {
        temp = new Node(val);
        *tree = temp;
        return;
    }

    if(val < (*tree)->data)
    {
        insert(&(*tree)->left, val);
    }
    else if(val > (*tree)->data)
    {
        insert(&(*tree)->right, val);
    }

}




int getCountOfNode(Node *root, int l, int h)
{

    if (!root) return 0;


    if (root->data == h && root->data == l)
        return 1;

    if (root->data <= h && root->data >= l)
         return 1 + getCountOfNode(root->left, l, h) +
                    getCountOfNode(root->right, l, h);

    else if (root->data < l)
         return getCountOfNode(root->right, l, h);


    else return getCountOfNode(root->left, l, h);
}


// } Driver Code Ends
/*The Node structure is
struct Node {
int data;
Node * right, * left;
};*/

/*You are required to complete below method */
class Solution{
  public:
  
  void fun(Node*root, unordered_map<int, bool> &visited, bool&ans){
      if(!root)
          return;
          
        //   visited the node 
        
        visited[root->data] = 1;
        if(root->left == 0 && root->right == 0){
            // leaf node 
            int xp1 = root->data +1;
            int xm1 = root->data -1 == 0 ? root->data:root->data -1;
            
            if(visited.find(xp1) != visited.end() && visited.find(xm1) != visited.end() ){
                ans = true;
            return;
            }
        }
        fun(root->left, visited, ans);
        fun(root->right, visited, ans);
  }
  
  
    bool isDeadEnd(Node *root)
    {
        //Your code here
        
        bool ans = false; // tells if there was a DE
        
        unordered_map<int, bool> visited;
        fun(root, visited, ans);
        return ans;
    }
};

//{ Driver Code Starts.
// bool isDeadEnd(Node *root);
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        Node *root;
        Node *tmp;
    //int i;

        root = NULL;

        int N;
        cin>>N;
        for(int i=0;i<N;i++)
        {
            int k;
            cin>>k;
            insert(&root, k);

        }

     Solution ob;
     cout<<ob.isDeadEnd(root);
     cout<<endl;
    }
}


// } Driver Code Ends