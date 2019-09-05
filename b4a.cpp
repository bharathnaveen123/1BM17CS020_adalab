#include<iostream> 
#include <list> 
using namespace std; 
  

class Graph 
{ 
    int V;   
  
    
    list<int> *adj; 
  
   
    void DFSUtil(int v, bool visited[]); 
public: 
    Graph(int V);   
    void addEdge(int v, int w); 
    void connectedComponents(); 
}; 
  

void Graph::connectedComponents() 
{ 
     
    bool *visited = new bool[V]; 
    for(int v = 0; v < V; v++) 
        visited[v] = false; 
  
    for (int v=0; v<V; v++) 
    { 
        if (visited[v] == false) 
        { 
           
            DFSUtil(v, visited); 
  
            cout << "\n"; 
        } 
    } 
} 
  
void Graph::DFSUtil(int v, bool visited[]) 
{ 
   
    visited[v] = true; 
    cout << v << " "; 
  
   
    list<int>::iterator i; 
    for(i = adj[v].begin(); i != adj[v].end(); ++i) 
        if(!visited[*i]) 
            DFSUtil(*i, visited); 
} 
  
Graph::Graph(int V) 
{ 
    this->V = V; 
    adj = new list<int>[V]; 
} 
  

void Graph::addEdge(int v, int w) 
{ 
    adj[v].push_back(w); 
    adj[w].push_back(v); 
} 
  

int main() 
{ 
    int a,b,i,n;
    
    Graph g(5);
    cout<<"enter no of nodes a & b";
    cin>>n;
    cout<<"enter all nodes";
    for(i=0;i<n;i++){
        cin>>a>>b;
        g.addEdge(a,b);    
    }
     
    
    cout << "connected components are  : \n"; 
    g.connectedComponents(); 
  
    return 0; 
} 