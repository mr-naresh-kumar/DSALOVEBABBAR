#include<iostream>
// #include<map>
#include<unordered_map>
#include<list>
#include<queue>


using namespace std;



// graph creation 

class Graph{

    public:
    unordered_map<int, list<int>>adjList;

    void addEdge(int u, int v, bool direction){
        // direction -> 0 ->undirected
        // direction> 1 ->directed 

        if(direction == 1){
            // u se v ki taraf edge hai 
            // u->v 
            adjList[u].push_back(v);
        }
        else {
            // direction  =0 
            // u -- v 
            // v->u
             adjList[u].push_back(v);
            // u->v 
             adjList[v].push_back(u);

        }

        cout<< endl << "printing adjList" << endl;
        printAdjList();
        cout << endl;

    }

    void printAdjList(){
        for(auto i :adjList){
            cout<< i.first << "-> {";

            for(auto neighbour: i.second){
                cout<< neighbour << ", ";
            }
            cout << "}" <<  endl;
        }
    }


    bool checkCycleUndirectedBSF(int src){
        queue<int>q;
        unordered_map<int, bool>visted;
        unordered_map<int, int>parent;
        // initial state 
        q.push(src);
        visted[src] = true;
        parent[src] = -1;

        while(!q.empty()){
            int frontNode = q.front();
            q.pop();

            for(auto nbr: adjList[frontNode]){
                if(!visted[nbr]){
                q.push(nbr);
                visted[nbr] = true;
                parent[nbr] = frontNode;
                }
              else if(visted[nbr] == true && nbr != parent[frontNode]){
                    // cycle present
                    return true;
                }
            }
        }

        // cycle not present 
        return false; 
    }
};


// template <typename T>



// class Graph {
//     public:
//     unordered_map<T,list<pair<T,int>>> adjList;

//     void addEdge(T u, T v, int wt, bool direction){
//         // direction = 0 ->undirected
//         // direction = 1 -> directed graph 

//         if(direction == 1){
//             // u ->v 
//         adjList[u].push_back(make_pair(v, wt));

//         }
//         else{
//             // direction  = 0;
//             // u -- v 
//             // u ->v 
//             // v->u

//             adjList[u].push_back({v,wt});
//             adjList[v].push_back({u,wt});

//         }
//         printAdjList();
//         cout<< endl;
//     }

//     void printAdjList(){
//         for(auto i:adjList){
//             cout<< i.first<< ": {";

//             for(pair<T, int>p:i.second){
//                 cout<< "{" <<p.first <<", " << p.second<<"},";
//             }
//             cout<<"}" << endl;
//         }
//     }

// // graph traversal 

// void bfsTraversal(T src,  unordered_map<T, bool>&vis){
//     // adjList already data member me hai 
//     // visited 
   
//     // queue
//     queue<T>q;
//     // initial state 

//     q.push(src);
//     vis[src] = true;

//     while(!q.empty()){
//         T frontNode = q.front();
//         cout<< frontNode << " ";
//         q.pop();

//         // go to nbr 

//         for(auto nbr:adjList[frontNode]){
//             T nbrData = nbr.first;

//             if(!vis[nbrData]){
//                 q.push(nbrData);
//                 vis[nbrData] = true;
//             }
//         }

//     }


// }


// void dfs (T src, unordered_map<T, bool>&vis){

//     vis[src] = true;
//     cout<< src<< " ";

//     for(auto nbr: adjList[src]){
//         T nbrData = nbr.first;
//         if(!vis[nbrData]){
//             dfs(nbrData, vis);
//         }
//     }
// }



// };



int main(){
    Graph g;
    g.addEdge(0,1,0);
    g.addEdge(1,2,0);
    g.addEdge(1,3,0);
    g.addEdge(2,4,0);
    //  g.addEdge(3,4,0);
      g.addEdge(2,5,0);
      
      int src =0;

      bool isCyclic = g.checkCycleUndirectedBSF(src);
      if(isCyclic){
        cout<<"Cycle Present" << endl;
      }
      else{
        cout<< "Cycle Absent " <<endl;
      }

    // g.addEdge('a','b',5,0);
    // g.addEdge('a','c',10,0);
    // g.addEdge('b','c',20,0);
    // g.addEdge('c','d',50,0);
    //  g.addEdge('c','e',50,0);
    //   g.addEdge('e','f',50,0);
    // cout<< "hii"<< endl;


    //  g.addEdge('a','b', 0);
    // g.addEdge('c','d', 0);
    //   g.addEdge('c','e', 0);
    //   g.addEdge('d','e', 0);
    //   g.addEdge('e', 'f', 0);
    //   unordered_map<char, bool> visited;
      
    //   g.dfs('a', visited);

//  unordered_map<char, bool>vis;
//       for(char node = 'a'; node<='f'; node++){
//         if(!vis[node]){
//             g.bfsTraversal(node, vis);
//         }
//       }

    // g.bfsTraversal('a');


    return 0;
}


// detect cycle in an undirected graph   by using BFS 

// //{ Driver Code Starts
// #include <bits/stdc++.h>
// using namespace std;

// // } Driver Code Ends
// class Solution {
//   public:
//     // Function to detect cycle in an undirected graph.
//     bool solve(int src, unordered_map<int, bool>&visted, vector<int> adj[]){
//            queue<int>q;
        
//         unordered_map<int, int>parent;
//         // initial state 
//         // int src =0;  
//         q.push(src);
//         visted[src] = true; 
//         parent[src] = -1;

//         while(!q.empty()){
//             int frontNode = q.front();
//             q.pop();

//             for(auto nbr: adj[frontNode]){
//                 if(!visted[nbr]){
//                 q.push(nbr);
//                 visted[nbr] = true;
//                 parent[nbr] = frontNode;
//                 }
//               else if(visted[nbr] == true && nbr != parent[frontNode]){
//                     // cycle present
//                     return true;
//                 }
//             }
//         }

//         // cycle not present 
//         return false; 
//     }
    
//     bool isCycle(int V, vector<int> adj[]) {
//         // Code here
//         unordered_map<int, bool>visted;
        
//         for(int i =0; i<V; i++){
//             if(!visted[i]){
//                 bool ans = solve(i, visted, adj);
//                 if(ans  == true){
                    
//                 return true;
//                 }
//             }
            
//         }
//         return false;
//     }
// };

// //{ Driver Code Starts.
// int main() {
//     int tc;
//     cin >> tc;
//     while (tc--) {
//         int V, E;
//         cin >> V >> E;
//         vector<int> adj[V];
//         for (int i = 0; i < E; i++) {
//             int u, v;
//             cin >> u >> v;
//             adj[u].push_back(v);
//             adj[v].push_back(u);
//         }
//         Solution obj;
//         bool ans = obj.isCycle(V, adj);
//         if (ans)
//             cout << "1\n";
//         else
//             cout << "0\n";
//     }
//     return 0;
// }
// // } Driver Code Ends


// use DFS 

// //{ Driver Code Starts
// #include <bits/stdc++.h>
// using namespace std;

// // } Driver Code Ends
// class Solution {
//   public:
  
//   bool checkCycle(int src, unordered_map<int, bool>&vis, int parent, vector<int> adj[]){
//       vis[src] = true;
//       for(auto nbr: adj[src]){
//           if(!vis[nbr]){
//               bool ans = checkCycle(nbr, vis, src, adj);
//               if(ans == true){
//                   return true;
//               }
              
//           }
//           else if(vis[nbr] ==1 && nbr != parent ){
//               return true;
//           }
//       }
//       return false;
        
//   }
//     // Function to detect cycle in an undirected graph.
//     bool isCycle(int V, vector<int> adj[]) {
//         // Code here
        
//         unordered_map<int, bool>vis;
//         for(int i =0; i<V; i++){
//             if(!vis[i]){
//                 int parent =-1;
//                 bool isCyclic  = checkCycle(i, vis, parent, adj);
//                 if(isCyclic ==  true){
//                     return true;
//                 }
//             }
//         }
//         return false;
//     }
// };

// //{ Driver Code Starts.
// int main() {
//     int tc;
//     cin >> tc;
//     while (tc--) {
//         int V, E;
//         cin >> V >> E;
//         vector<int> adj[V];
//         for (int i = 0; i < E; i++) {
//             int u, v;
//             cin >> u >> v;
//             adj[u].push_back(v);
//             adj[v].push_back(u);
//         }
//         Solution obj;
//         bool ans = obj.isCycle(V, adj);
//         if (ans)
//             cout << "1\n";
//         else
//             cout << "0\n";
//     }
//     return 0;
// }
// // } Driver Code Ends