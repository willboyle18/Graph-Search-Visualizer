// Graph Search Visualizier
// Author William Boyle

#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include "graph.hpp"

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
    graph.print_graph();

    return 0;
}