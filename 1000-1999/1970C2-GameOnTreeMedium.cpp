#include <iostream>
#include <vector>

using namespace std;

const int MAX_N = 2e5 + 5;

vector<int> adj[MAX_N]; // Adjacency list representation of the tree
bool visited[MAX_N];    // Boolean array to mark visited nodes
bool win[MAX_N];        // Whether player can win from the current node

// Function to recursively determine whether a player can win from a given node
bool canWin(int node) {
    visited[node] = true;
    win[node] = false; // Assume the player cannot win initially

    for (int neighbor : adj[node]) {
        if (!visited[neighbor]) {
            if (!canWin(neighbor)) {
                // If the opponent cannot win from the neighbor, the current player can win from this node
                win[node] = true;
            }
        }
    }

    return win[node];
}

int main() {
    int n, t;
    cin >> n >> t;

    // Read the tree edges
    for (int i = 0; i < n - 1; ++i) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    // Read the starting nodes for each round and determine the winners
    for (int i = 0; i < t; ++i) {
        int startNode;
        cin >> startNode;

        // Reset the visited array
        fill(visited, visited + n + 1, false);

        // Determine whether player 1 can win from the starting node
        bool player1Wins = canWin(startNode);

        // Output the result
        if (player1Wins) {
            cout << "Player 1 wins" << endl;
        } else {
            cout << "Player 2 wins" << endl;
        }
    }

    return 0;
}
