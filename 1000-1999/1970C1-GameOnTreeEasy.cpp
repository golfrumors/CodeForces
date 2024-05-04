#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct TreeNode {
    vector<int> neighbors;
    bool visited = false;
};

bool canWin(TreeNode tree[], int currentNode) {
    tree[currentNode].visited = true;
    bool result = false;
    for (int neighbor : tree[currentNode].neighbors) {
        if (!tree[neighbor].visited) {
            result |= !canWin(tree, neighbor);
        }
    }
    return result;
}

int main() {
    int n, t;
    cin >> n >> t;

    TreeNode tree[n + 1];
    for (int i = 1; i < n; ++i) {
        int u, v;
        cin >> u >> v;
        tree[u].neighbors.push_back(v);
        tree[v].neighbors.push_back(u);
    }

    for (int round = 0; round < t; ++round) {
        int startingNode;
        cin >> startingNode;

        bool ronWins = canWin(tree, startingNode);

        if (ronWins) {
            cout << "Ron";
        } else {
            cout << "Hermione";
        }

        for (int i = 1; i <= n; ++i) {
            tree[i].visited = false;
        }
    }

    return 0;
}
