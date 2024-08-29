#include<iostream>
// #include<map>
#include<unordered_map>
#include<list>
#include<queue>



using namespace std;



// graph creation 

// class Graph{
//     public:
//     unordered_map<int, list<int>>adjList;

//     void addEdge(int u, int v, bool direction){
//         // direction -> 0 ->undirected
//         // direction> 1 ->directed 

//         if(direction == 1){
//             // u se v ki taraf edge hai 
//             // u->v 
//             adjList[u].push_back(v);
//         }
//         else {
//             // direction  =0 
//             // u -- v 
//             // v->u
//              adjList[u].push_back(v);
//             // u->v 
//              adjList[v].push_back(u);

//         }

//         cout<< endl << "printing adjList" << endl;
//         printAdjList();
//         cout << endl;

//     }

//     void printAdjList(){
//         for(auto i :adjList){
//             cout<< i.first << "-> {";

//             for(auto neighbour: i.second){
//                 cout<< neighbour << ", ";
//             }
//             cout << "}" <<  endl;
//         }
//     }
// };


// 12/8/2024

// class Graph{
//     public:
//     unordered_map<int, list<int>>adjList;

//     void addEdge(int u, int v, bool direction){
//         // direction ->0 ->undirected
//         // direction ->1 -> directed 
//         if(direction ==1){
//             // u se v ki traf ek edge hai 
//             // u->v
//             adjList[u].push_back(v);

//         }
//         else{
//             // direction = 0;
//             // u ->v
//             // v->u
//              adjList[u].push_back(v);
//               adjList[v].push_back(u);
//         }
//         cout<< endl << "Printing adjList" << endl;
//         printAdjList();
//         cout<< endl;
//     }
//     void printAdjList(){
//         for(auto i :adjList){
//             cout<< i.first << "-> {"; 
//             for(auto nbr : i.second){
//                 cout << nbr << ",";
//             }
//             cout<<"}" << endl;
//         }
//     }
    
// };
// template <typename T>
template<typename  T>

class Graph{
    public:
    unordered_map<T, list<pair<T, int>>>adjList;

    void addEdge(T u, T v, int wt, bool direction){
        // direction = 0 ->undirected 
        // direction  = 1 -> directed graph 
        if(direction == 1){
            adjList[u].push_back(make_pair(v, wt)); // with out make_pair use({v, wt});
        }else{
            // direction  = 0;
            // u   ---- -v 
            adjList[u].push_back({v,wt});
            adjList[v].push_back({u, wt});
        }
        printAdjList();
        cout<< endl;
    }

    void printAdjList(){
        for(auto i: adjList){
            cout<< i.first << ": {";
            for(pair<T, int> p:i.second){
                cout<< "{" <<p.first << ", " << p.second << "},"; 
            }
            cout << endl;
        }
    }


    // grap traversal bsf 
    void bsfTraversal(T src, unordered_map<T, bool>&vis){
        // adjList already data member me hai 
        
        // queue 
        queue<T>q;
        // initial state 
        q.push(src);
        vis[src] = true;
        while(!q.empty()){
            T frontNode  = q.front();
            cout<< frontNode << " ";
            q.pop();

            // go to nbr 
            for(auto nbr: adjList[frontNode]){
                T nbrData = nbr.first;
                if(!vis[nbrData]){
                    q.push(nbrData);
                    vis[nbrData] = true;
                }
            }

        }

    }


    void dfs(T src, unordered_map<T, bool> &vis){
        vis[src] = true;
        cout<< src << " ";
        for(auto nbr: adjList[src]){
            T nbrData = nbr.first;
            if(!vis[nbrData]){
                dfs(nbrData, vis);
            }

        }
    }

};
int main(){
    Graph<char> g;
    // g.addEdge(0,1,0);
    // g.addEdge(1, 2,0);
    // g.addEdge(1,3,0);
    // g.addEdge(2,3,0);
    // g.addEdge(0,1,5,1);
    // g.addEdge(1,2,10,1);
    // g.addEdge(1,3,20,1);
    // g.addEdge(2,3,50,1);

    g.addEdge('a','b',5,0);
    g.addEdge('a','c',10,0);
    g.addEdge('c','d',20,0);
    g.addEdge('c','e',50,0);

     g.addEdge('d','e',50,0);
      g.addEdge('e','f',50,0);

    unordered_map<char, bool> vis;

      g.dfs('a', vis);

    // for(char node='a'; node<='f'; node++){
    //     if(!vis[node]){
    //         g.bsfTraversal(node, vis);
    //     }
    // }
    
   


    return 0;
}



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



// int main(){
//     Graph<char> g;
//     // g.addEdge(0,1,0);
//     // g.addEdge(1,2,0);
//     // g.addEdge(1,3,0);
//     // g.addEdge(2,3,0);

//     // g.addEdge('a','b',5,0);
//     // g.addEdge('a','c',10,0);
//     // g.addEdge('b','c',20,0);
//     // g.addEdge('c','d',50,0);
//     //  g.addEdge('c','e',50,0);
//     //   g.addEdge('e','f',50,0);
//     cout<< "hii"<< endl;


//      g.addEdge('a','b',5,0);
//     g.addEdge('a','c',10,0);

//     g.addEdge('c','d',20,0);


//       g.addEdge('c','e',50,0);
//       g.addEdge('d','e', 20,0);
//       g.addEdge('e', 'f', 50, 0);
//       unordered_map<char, bool> visited;
      
//       g.dfs('a', visited);

// //  unordered_map<char, bool>vis;
// //       for(char node = 'a'; node<='f'; node++){
// //         if(!vis[node]){
// //             g.bfsTraversal(node, vis);
// //         }
// //       }

//     // g.bfsTraversal('a');


//     return 0;
// }