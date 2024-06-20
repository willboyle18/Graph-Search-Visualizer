#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <algorithm>
#include <stack>
#include "graph.hpp"

void dfs(Graph graph){
    std::cout << "DFS is now taking place" << std::endl;
    std::unordered_set<char> visited;
    std::stack<char> frontier;
    std::vector<char> neighbors;
    std::unordered_map<char, int> layer_map;
    frontier.push(graph.get_starting_node());
    visited.insert(graph.get_starting_node());
    layer_map[frontier.top()] = 0;
    char current;
    while(!frontier.empty()){
        current = frontier.top();
        frontier.pop();
        std::cout << "Exploring " << current << ", Layer: " << layer_map[current] << std::endl;
        neighbors = graph.get_neighbors(current);
        for (char element : neighbors) {
            // Check if the element has already been visited
            if(visited.find(element) == visited.end()){
                frontier.push(element);
                visited.insert(element);
                layer_map[element] = layer_map[current] + 1;
            }
        }
    }
}