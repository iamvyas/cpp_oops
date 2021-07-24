// modified code from geeks for geeks and dope tech
#include<iostream>
#include<bits/stdc++.h> 
using namespace std; 
/*
// Graph class represents a directed graph 
// using adjacency list representation 
class Graph 
{ 
	int V; // No. of vertices 

	// Pointer to an array containing 
	// adjacency lists 
	list<int> *adj; 

	// A recursive function used by DFS 
	void DFSUtil(int v, bool visited[]); 
public: 
	Graph(int V); // Constructor 

	// function to add an edge to graph 
	void addEdge(int v, int w); 

	// DFS traversal of the vertices 
	// reachable from v 
	void DFS(int v); 
}; 

Graph::Graph(int v_no) 
{ 
	V = v_no; 
	adj = new list<int>[V]; 
} 

void Graph::addEdge(int v, int w) 
{ 
	adj[v].push_back(w); // Add w to v’s list. 
} 

void Graph::DFSUtil(int v, bool visited[]) 
{ 
	// Mark the current node as visited and 
	// print it 
	visited[v] = true; 
	cout << v << " "; 

	// Recur for all the vertices adjacent 
	// to this vertex 
	list<int>::iterator i; 
	for (i = adj[v].begin(); i != adj[v].end(); ++i) 
		if (!visited[*i]) 
			DFSUtil(*i, visited); 
} 

// DFS traversal of the vertices reachable from v. 
// It uses recursive DFSUtil() 
void Graph::DFS(int v) 
{ 
	// Mark all the vertices as not visited 
	bool *visited = new bool[V]; 
	for (int i = 0; i < V; i++) 
		visited[i] = false; 

	// Call the recursive helper function 
	// to print DFS traversal 
	DFSUtil(v, visited); 
} 

// Driver code 
*/
class node{
    int data;
    node *next;

};

// Graph class represents a directed graph 
// using adjacency list representation 
class Graph 
{ 
	int V; // No. of vertices 

	// Pointer to an array containing 
	// adjacency lists 
	list<int> *adj; 

	// A recursive function used by DFS 
	void DFSUtil(int v, bool visited[]); 
public: 
	Graph(int V); // Constructor 

	// function to add an edge to graph 
	void addEdge(int v, int w);

	void print();

	// DFS traversal of the vertices 
	// reachable from v 
	void DFS(int v); 
};
/*
void Graph::print(){
	int i=0;
	for(i=0;i<sizeof(adj);i++)
	{
		cout<<"\n"<<adj[i];
		return;
	}
}
*/


Graph::Graph(int v_no) 
{ 
	V = v_no; 
	adj = new list<int>[V]; 
} 

void Graph::addEdge(int v, int w) 
{ 
	adj[v].push_back(w); // Add w to v’s list.
	cout<<""; 
} 

void Graph::DFSUtil(int v, bool visited[]) 
{ 
	// Mark the current node as visited and 
	// print it 
	visited[v] = true; 
	cout << v << " "; 

	// Recur for all the vertices adjacent 
	// to this vertex 
	list<int>::iterator i; 
	for (i = adj[v].begin(); i != adj[v].end(); ++i) 
		if (!visited[*i]) 
			DFSUtil(*i, visited); 
} 

// DFS traversal of the vertices reachable from v. 
// It uses recursive DFSUtil() 
void Graph::DFS(int v) 
{ 
	// Mark all the vertices as not visited 
	bool *visited = new bool[V]; 
	for (int i = 0; i < V; i++) 
		visited[i] = false; 

	// Call the recursive helper function 
	// to print DFS traversal 
	DFSUtil(v, visited); 
}

int main() 
{ 
	// Create a graph given in the above diagram 
    int n,i,v1,v2;
    char choice='y';
    cout<<"\nenter the number of vertices";
    cin>>n;
	Graph g(n);
    while(choice=='y'){
        cout<<"\nenter the vertices:";
        cin>>v1>>v2;
        g.addEdge(v1,v2);
        cout<<"\nwant to add(y/n):";
        cin>>choice;

    } 

	cout << "\nFollowing is Depth First Traversal"
			" (starting from vertex 0) \n"; 
	g.DFS(0); 

	return 0; 
} 

