/* January 2019
 * Author: Adela Jaworowska / indeks: 283747 / 283747@pw.edu.pl
 * Project: Finding maximal clique in a graph.
 */


#ifndef PROJEKTAAL_GRAPH_H
#define PROJEKTAAL_GRAPH_H

#include <vector>
#include <fstream>
#include <string>
#include <iostream>

using namespace std;

class Graph {
private:
    int numberOfNodes;
    vector<vector<int>> neighbours;

public:
    Graph();
    ~Graph();
    const vector<vector<int>> &getNeighbours() const;
    int getNumberOfNodes() const;
    void setNumberOfNodes(int numberOfNodes);
    void setNeighbours(vector<int> intVect);
    void setGraph(pair<int , vector<vector<int>>> graphParams);
    void printNeighbours();
};


#endif //PROJEKTAAL_GRAPH_H
