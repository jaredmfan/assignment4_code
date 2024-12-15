#include "Graph.h"
#include "LinkedBagDS/LinkedBag.h"
#include "LinkedBagDS/Node.h"
#include <utility>
#include <iostream>

// Constructor
template <typename T>
Graph<T>::Graph(int vertices, bool directed)
    : V(vertices), directed(directed) {
    adjList.resize(V);
}

// Add an edge
template <typename T>
void Graph<T>::addEdge(int u, int v, T
 weight) {

    if(u == v){
        return;
    }

    adjList[u].add({v, weight});
    if (!directed) {
        adjList[v].add({u, weight});
    }
}

// Get number of nodes
template <typename T>
int Graph<T>::getNumVertices() const{
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
    // for (int i = 0; i < V; ++i) {
    //     cout << "Vertex " << i << ": ";
    //     //auto neighbors = adjList[i].toVector();
    //     for (const auto& neighbor : neighbors) {
    //         cout << "(" << neighbor.first << ", " << neighbor.second << ") ";
    //     }
    //     cout << endl;
    // }
}

// Get neighbors of a vertex
template <typename T>
const LinkedBag<pair<int, T>>& Graph<T>::getNeighbors(int vertex) const {
    return adjList[vertex];
}


// DFS Traversal (Recursive approach)
template <typename T>
void Graph<T>::DFT(int start) const {
    vector<bool> visited(V, false); // To keep track of visited vertices
    DFTRecursive(start, visited);
    cout << endl;
}

// Utility function for DFS (Recursive)
template <typename T>
void Graph<T>::DFTRecursive(int v, vector<bool>& visited) const {
    visited[v] = true;
    const LinkedBag<std::pair<int, T>>& neighbors = adjList[v];

    
    

    // Recur for all the vertices adjacent to this vertex
    for (const auto& neighbor : neighbors.toVector()) {
        int neighborNode = neighbor.first; // The connected node
        const T& user = neighbor.second; // The weight of the edge
        cout << "User:  " << ": " << user << endl;
        if (!visited[neighbor.first]) {
            DFTRecursive(neighborNode, visited);
        }
    }
}

// -----------------------------------------------------
// Depth First Search (by username)
// TO DO 
// Add DFS implementation 
// Add DFSRecursive implementation 
