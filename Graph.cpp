#include "Graph.h"

// Constructor
template <typename T>
Graph<T>::Graph(int vertices, bool directed)
    : V(vertices), directed(directed) {
    adjList.resize(V);
}

// Add an edge
template <typename T>
void Graph<T>::addEdge(int u, int v, T weight) {
    if (u == v) return;
    adjList[u].add({v, weight});
    if (!directed) {
        adjList[v].add({u, weight});
    }
}

// Get number of nodes
template <typename T>
int Graph<T>::getNumVertices() const {
    return V;
}

// Print the adjacency list
template <typename T>
void Graph<T>::printGraph() const {
    for (int i = 0; i < V; ++i) {
        cout << "Vertex " << i << ": ";
        auto neighbors = adjList[i].toVector();
        for (const auto& neighbor : neighbors) {
            cout << "(" << neighbor.first << ", " << neighbor.second << ") ";
        }
        cout << endl;
    }
}

// Get neighbors of a vertex
template <typename T>
const LinkedBag<pair<int, T>>& Graph<T>::getNeighbors(int vertex) const {
    return adjList[vertex];
}

// Depth First Traversal
template <typename T>
void Graph<T>::DFT(int start, vector<User>& data) const {
    vector<bool> visited(V, false);
    DFTRecursive(start, visited, data);
}

// Recursive DFS
template <typename T>
void Graph<T>::DFTRecursive(int v, vector<bool>& visited, vector<User>& data) const {
    visited[v] = true;
    auto neighbors = adjList[v].toVector();

    /*
    for (const auto& neighbor : neighbors) {
        int neighborNode = neighbor.first;
        const T& user = neighbor.second;
        cout << "User: " << user << endl;

        if (!visited[neighborNode]) {
            DFTRecursive(neighborNode, visited, data);
        }
    }
    
    */
    User user = data[v];
    cout << "Vertex #: " << v << " User: " << user << endl;
    for (const auto& neighbor : neighbors) {
        int next = neighbor.first;
        const T& userIndex = neighbor.second; 

        
        if (!visited[next]) {
            
            
            DFTRecursive(next, visited, data); 
        }
    }
}
