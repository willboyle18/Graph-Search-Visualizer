// Graph Search Visualizier
// Author William Boyle

#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include "graph.hpp"
#include "BFS.hpp"

int main(){
    Graph graph('A');
    graph.add_edge('A', 'B');
    graph.add_edge('A', 'C');
    graph.add_edge('A', 'D');
    graph.add_edge('B', 'D');
    graph.add_edge('B', 'F');
    graph.add_edge('C', 'D');
    graph.add_edge('C', 'E');
    graph.add_edge('D', 'G');
    graph.add_edge('G', 'H');
    // graph.get_starting_node();
    // graph.set_starting_node('D');
    // graph.get_starting_node();
    graph.print_graph();
    bfs(graph);

    return 0;
}