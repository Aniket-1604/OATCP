getsrc function:
    This function takes an unordered map deg as input, which maps each integer to a pair representing its indegree and outdegree.
    It iterates over each pair (key, value) in the map deg.
    If the difference between the outdegree and the indegree of the current integer is 1, it assigns the current integer key to the variable src and breaks from the loop.
    If no integer with a difference of 1 is found, it assigns the last integer key to src.

validArrangement function:
    This function takes a vector of vectors pairs as input, where each inner vector represents a pair of integers.
    It initializes an unordered map graph to represent the adjacency list representation of the graph.
    It also initializes an unordered map deg to store the indegree and outdegree of each integer.
    It populates the graph and deg maps based on the input pairs.
    It calls the getsrc function to find the source vertex of the graph.
    It initializes a deque path to store the valid arrangement of integers.
    It initializes a stack st and pushes the source vertex onto it.
    It performs a depth-first search (DFS) traversal to find a valid arrangement of integers.
    During the traversal, if a vertex has no outgoing edges, it adds the vertex to the front of the deque path.
    Otherwise, it selects one of the outgoing edges and pushes the corresponding vertex onto the stack st.
    Once the traversal is complete, it constructs the valid arrangement from the vertices in the deque path.
    It returns the valid arrangement as a vector of vectors.

main function:
    It reads input from a file named "input2.txt" and writes output to a file named "output2.txt".
    It reads the number of pairs n from input.
    It initializes a vector of vectors vp to store the input pairs.
    It populates the vp vector with the input pairs.
    It calls the validArrangement function to find a valid arrangement of integers.
    If a valid arrangement is found, it prints it to the output file. Otherwise, it prints "No valid arrangement found!".