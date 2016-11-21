//
// Created by ma3 on 10.11.2016.
//

#ifndef MONTECARLOSIMULATION_GRAPH_H
#define MONTECARLOSIMULATION_GRAPH_H

#include <vector>
#include <list>

/*
 * Graph as a data structure can be represented by
 * Connectivity Matrix or Edge List, for some graphs
 * one repsentation would have strong benefits over the second repsentation
 * It depends on how much data you need to store and how efficient the algorithm is.
 * typically for dense graphs, matrix representation is frequently better.
 */

/*
 * In this Graph implementation;
 * Graps are asumed as undirected Graph,
 * Edges are asumed have positive cost
 */



using namespace std;
//List representation
// List "i" contains vertex "j" if there is an edge from vetex "i" to vertex "j" vice verse if the grap is undirected
class Graph
{
public:
    //n for vertex count
    Graph(int n);

    //returns the number of vertices in the graph
    int V();

    //returns the number of edges in the graph
    int E();

    //tests whether there is an edge from node x to node y.
    bool adjacent (int x, int y);

    //lists all nodes y such that there is an edge from x to y.
    void neighbors (int x);

    // adds to G the edge from x to y, if it is not there.
    void add (int x, int y);

    // removes the edge from x to y, if it is there.
    void delete_edge (int x, int y);

    //returns the value associated with the node x.
    void get_node_value (int x);

    //sets the value associated with the node x to a.
    void set_node_value(int x, int a);

    // returns the value associated to the edge (x,y).
    int get_edge_value( int x, int y);

    // sets the value associated to the edge (x,y) to v.
    void set_edge_value (int x, int y, int v);

private:
    int n;// n vertices list
    vector< list< pair <int, int> > > G; // The graph representation will be in adjacency list form


};


#endif //MONTECARLOSIMULATION_GRAPH_H
