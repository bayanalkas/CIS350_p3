#include <iostream>
#include <fstream>
#include <sstream>
#include <list>
#include <vector>
#include <queue>
using namespace std;

struct Edge {
    int destinationVertex;
    int edgeWeight;
    Edge(int dest, int weight) : destinationVertex(dest), edgeWeight(weight) {}
};

class Graph {
private:
    int numberOfNodes;
    vector<list<Edge>> adjacencyListGraph;

public:
    Graph(int nodes) : numberOfNodes(nodes), adjacencyListGraph(nodes) {}

    void addEdge(int source, int destination, int weight) {
        adjacencyListGraph[source].emplace_back(destination, weight);
        adjacencyListGraph[destination].emplace_back(source, weight); // Undirected graph
    }

    void printGraph() {
        for (int i = 0; i < numberOfNodes; i++) {
            cout << "Adj[" << i << "] ->";
            for (const Edge& edge : adjacencyListGraph[i]) {
                cout << " (" << edge.destinationVertex << "," << edge.edgeWeight << ")";
            }
            cout << endl;
        }
    }
};

int main() {
    cout << "Welcome to the MST Test Program" << endl;
    cout << "Enter input file name: ";
    string inputFileName;
    cin >> inputFileName;

    ifstream ins(inputFileName); // Open input file
    if (!ins.is_open()) {
        cerr << "Error: Could not open input file." << endl;
        return EXIT_FAILURE;
    }

    // Read the number of nodes and edges
    int numberOfNodes, numberOfEdges;
    ins >> numberOfNodes >> numberOfEdges;

    // Create a graph with the given number of nodes
    Graph graph(numberOfNodes);

    // Read and process the edge information
    for (int i = 0; i < numberOfEdges; i++) {
        int source, destination, weight;
        ins >> source >> destination >> weight;

        // Add the edge to the graph
        graph.addEdge(source, destination, weight);
    }

    // Close the input file
    ins.close();

    // Print the adjacency list for the full graph
    cout << "Full Graph Adjacency List" << endl;
    graph.printGraph();

    cout << "Thank you for running the MST Test Program created by BAYAN!" << endl;

    return 0;
}
