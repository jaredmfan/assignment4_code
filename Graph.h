#ifndef GRAPH_H
#define GRAPH_H

#include "LinkedBagDS/LinkedBag.h"
#include "LinkedBagDS/Node.h"

#include <iostream>
#include <vector>
#include <utility>
#include "User.h"

using namespace std;

// Template class for a Graph
template <typename T>
class Graph {
public:
    // Constructor
    Graph(int vertices, bool directed = false);

    // Add an edge
    void addEdge(int u, int v, T weight = T());

    // Get number of nodes
    int getNumVertices() const;

    // Print the adjacency list
    void printGraph() const;

    // Get neighbors of a vertex
    const LinkedBag<pair<int, T>>& getNeighbors(int vertex) const;

    // Depth First Traversal
    void DFT(int start, vector<User>& data) const;

private:
    // Recursive helper for DFS
    void DFTRecursive(int v, vector<bool>& visited, vector<User>& data) const;

    int V; // Number of vertices
    bool directed; // Whether the graph is directed or undirected
    vector<LinkedBag<pair<int, T>>> adjList; // Adjacency list
};

// Implementation of template functions
#include "Graph.cpp"

#endif // GRAPH_H
