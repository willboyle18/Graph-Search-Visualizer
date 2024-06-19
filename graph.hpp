#include <iostream>
#include <unordered_map>
#include <vector>

class Graph{
    private:
    std::unordered_map<char, std::vector<char>> graph;
    
    public:
    Graph(char n){ graph[n] = {}; }
    void add_node(char n);
    void add_edge(char first, char second);
    void print_graph();
};

void Graph::add_node(char n){
    // Check to see if the node exists in the graph already
    if(graph.find(n) == graph.end()) {
        graph[n] = {}; // Initialize an empty adjacency list for the node
    }
    else{
        std::cout << "Node already exists within the graph" << std::endl;
    }
}

void Graph::add_edge(char first, char second) {
    add_node(first);
    add_node(second);
    // Check if the edge does not already exist
    if (std::find(graph[first].begin(), graph[first].end(), second) == graph[first].end()) {
        graph[first].push_back(second);
        graph[second].push_back(first);
    } else {
        std::cout << "Edge already exists." << std::endl;
    }
}

void Graph::print_graph(){
    for (auto& node : graph) {
        std::cout << "Node " << node.first << " has edges to: ";
        for (char connected_node : node.second) {
            std::cout << connected_node << " ";
        }
        std::cout << std::endl;
    }
}