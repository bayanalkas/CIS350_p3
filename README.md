# CIS350_p3
# MST (Minimum Spanning Tree) Program
This program calculates the Minimum Spanning Tree (MST) of a given fully connected undirected graph using Prim's algorithm. It reads input from a file, constructs the graph, and then computes the MST, printing the adjacency list for both the original graph and the MST.

## Getting Started

# Usage
Clone this repository or download the source code files (main.cpp).

Compile the program using your C++ compiler:

X is the number of nodes in the graph (3 ≤ X ≤ 100,000).
Y is the number of edges in the graph (X ≤ Y ≤ 100,000).
si and ti are the IDs of two nodes involved in an edge.
wi is the weight of the edge.
See the provided sample input files for reference.

Run the program, providing the input file as input:
You will be prompted to enter the input file name.
The program will calculate the MST and display the adjacency list for both the original graph and the MST. The output will also be saved to a specified output file.

# Example
Suppose you have an input file named input_file.txt with the following content:

6 9
0 1 1
1 3 5
3 0 3
3 4 1
1 4 1
1 2 6
5 2 2
2 4 4
5 4 4

# Running the program with this input will produce the following output:
Welcome to the MST Test Program
Enter input file name: input.txt
Full Graph Adjacency List
Adj[0] -> (1,1) (3,3)
Adj[1] -> (0,1) (3,5) (4,1) (2,6)
Adj[2] -> (1,6) (5,2)
Adj[3] -> (1,5) (0,3) (4,1)
Adj[4] -> (3,1) (1,1) (5,4) (2,4)
Adj[5] -> (2,2) (4,4)
Thank you for running the MST Test Program created by BAYAN!




