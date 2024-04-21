#include <iostream>
#include <vector>
#include <queue>
#include <stack>

using namespace std;

// Graph represented as an adjacency list 
vector<vector<int>> adjList(100);
bool visited[100] = {false};

// BFS traversal for a given start node
void bfs(int start) {
  queue<int> q;
  q.push(start);
  visited[start] = true;
  while (!q.empty()) {
    int node = q.front();
    q.pop();
    cout << node << " ";
    for (int neighbor : adjList[node]) {
      if (!visited[neighbor]) {
        q.push(neighbor);
        visited[neighbor] = true;
      }
    }
  }
}

// Recursive DFS with explicit visited array and vector for neighbors
void dfs(vector<vector<int>>& adjList, int node, bool visited[], vector<int>& sorted) {
  visited[node] = true;
  sorted.push_back(node);
  for (int neighbor : adjList[node]) {
    if (!visited[neighbor]) {
      dfs(adjList, neighbor, visited, sorted);
    }
  }
}

void bubbleSort(int arr[], int n) {
  bool swapped;
  for (int i = 0; i < n - 1; ++i) {
    swapped = false;
    for (int j = 0; j < n - i - 1; ++j) {
      if (arr[j] > arr[j + 1]) {
        swap(arr[j], arr[j + 1]);
        swapped = true;
      }
    }
    if (!swapped) { // Early exit if no swaps occur
      break;
    }
  }
}

void printVector(int arr[], int n) {
    cout << "\nEl vector tiene estos elementos: \n";
    for (int i=0; i < n; i++)
        cout << arr[i] << " ";
    cout << "\n";
}

int main()
{
    vector<vector<int>> adj = {
      {1, 2}, // Node 0 is connected to 1 and 2
      {2, 3}, // Node 1 is connected to 2 and 3
      {0},    // Node 2 is connected to 0
      {}      // Node 3 has no connections
    };
    
    bool visited[4] = {false, false, false, false};

    
    cout << "BFS: \n";
    
    bfs(1);
    
    cout << "DFS: \n";
    
    vector<int> inVector = {
      0, 
      1, 
      2,    
      3    
    };

    dfs(adj, 1, visited, inVector);
    
    int toOrder[4] = {
      60, 
      1, 
      12,    
      11    
    };
    
    bubbleSort(toOrder, 4);
    printVector(toOrder, 4);
    
    return 0;
}
