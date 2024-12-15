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