#include <iostream>
#include <string>
#include <vector>

#include "Graph.h"
#include "LinkedBagDS/LinkedBag.h"
#include "User.h"

int main() {
	// Create a list of Users
	std::vector<User> users; 


	//Graph<User> g(10, true);
	// Add 10 distinct users to the vector
	// TO DO 

	users.push_back(User("alice", "alice@example.com", "password1", "Bio of Alice", "alice_pic.jpg"));
	users.push_back(User("bob", "bob@example.com", "password2", "Bio of Bob", "bob_pic.jpg"));
	users.push_back(User("charlie", "charlie@example.com", "password3", "Bio of Charlie", "charlie_pic.jpg"));
	users.push_back(User("david", "david@example.com", "password4", "Bio of David", "david_pic.jpg"));
	users.push_back(User("eve", "eve@example.com", "password5", "Bio of Eve", "eve_pic.jpg"));
	users.push_back(User("frank", "frank@example.com", "password6", "Bio of Frank", "frank_pic.jpg"));
	users.push_back(User("grace", "grace@example.com", "password7", "Bio of Grace", "grace_pic.jpg"));
	users.push_back(User("hannah", "hannah@example.com", "password8", "Bio of Hannah", "hannah_pic.jpg"));
	users.push_back(User("isaac", "isaac@example.com", "password9", "Bio of Isaac", "isaac_pic.jpg"));
	users.push_back(User("jack", "jack@example.com", "password10", "Bio of Jack", "jack_pic.jpg"));

	
	// Initialize a graph with n vertices (where n is the number of Users) 
	//	 Indicate whether it is directed or undirected 
	// TO DO 

	Graph<User> g(10, true);


	// Add edges (userA, userB, weight)
	// TO DO 

	// g.addEdge(1, 3, users[2]);
	// g.addEdge(2, 9, users[8]);
	// g.addEdge(4, 10, users[6]);
	// g.addEdge(5, 6, users[5]);
	// g.addEdge(6, 8, users[7]);
	// g.addEdge(7, 5, users[4]);
	// g.addEdge(9, 4, users[3]);
	// g.addEdge(3, 2, users[1]);
	// g.addEdge(8, 1, users[0]);
	// g.addEdge(10, 5, users[4]);
	// Add edges between users
	g.addEdge(0, 1, users[1]); // Alice follows Bob
	g.addEdge(1, 2, users[2]); // Bob follows Charlie
	g.addEdge(2, 3, users[3]); // Charlie follows David
	g.addEdge(3, 4, users[4]); // David follows Eve
	g.addEdge(4, 5, users[5]); // Eve follows Frank
	g.addEdge(5, 6, users[6]); // Frank follows Grace
	g.addEdge(6, 7, users[7]); // Grace follows Hannah
	g.addEdge(7, 8, users[8]); // Hannah follows Isaac
	g.addEdge(8, 9, users[9]); // Isaac follows Jack
	g.addEdge(9, 0, users[0]); // Jack follows Alice (creates a cycle)


	// Print the adjacency list
	g.printGraph();

	// // Depth First traversal should print User information not just indices
	// int start = 0;
	// // Call DFT 
	// // g.DFT(0, ...);


	// bool found = false;
	// // Depth First search
	// string username1 = ""; //replace with a username that exists 
	// // Call DFS 
	// // TO DO:  
	// // found = g.DFS(username1, ...);
	// if(found){
	// 	cout << username1 << " has been found in the graph!" << endl;
	// }else{
	// 	cout << username1 << " has not been found in the graph!" << endl;
	// }

	// string username2 = ""; //replace with a username that DOES NOT exist 
	// // Call DFS 
	// // TO DO:
	// // found = g.DFS(username2, ...);
	// if(found){
	// 	cout << username1 << " has been found in the graph!" << endl;
	// }else{
	// 	cout << username1 << " has not been found in the graph!" << endl;
	// }

	return 0;
}
