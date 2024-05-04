bfs function:
    This function performs a BFS traversal from the source node s to the destination node t in the residual graph to find an augmenting path.
    It takes the residual graph temp, source node s, destination node t, and an array pfx to store the parent of each node in the augmenting path.
    It initializes a boolean array vis to mark visited nodes and a queue q for BFS traversal.
    It performs BFS until the queue is empty or the destination node t is reached.
    During BFS traversal, if an unvisited vertex v is found and there is a positive residual capacity from u to v, v is marked as visited, its parent is updated to u, and it is pushed into the queue.
    If the destination node t is reached, the function returns true; otherwise, it returns false.

maximumFlow function:
    This function implements the Ford-Fulkerson algorithm using the BFS augmentation method.
    It takes the capacity graph grid, source node s, and destination node t.
    It initializes the residual graph temp with the same capacities as the original graph.
    It repeatedly calls the bfs function to find augmenting paths and updates the flow in the residual graph accordingly until no more augmenting paths exist.
    During each iteration, it finds the minimum residual capacity (pf) along the augmenting path and updates the flow in the residual graph.
    It keeps track of the maximum flow (mx) achieved.
    It measures the time taken by the algorithm using std::chrono library.
    Finally, it returns the maximum flow.

main function:
    It reads input from a file named "input.txt" and writes output to a file named "output.txt".
    It reads the number of nodes n, source node src, and destination node dst.
    It initializes the capacity graph grid with zeros.
    It reads edges and their capacities from input until -1 is encountered.
    It calls the maximumFlow function to find the maximum flow in the graph.
    It prints the maximum flow to the output file.