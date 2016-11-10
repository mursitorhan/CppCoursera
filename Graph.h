//
// Created by ma3 on 10.11.2016.
//

#ifndef MONTECARLOSIMULATION_GRAPH_H
#define MONTECARLOSIMULATION_GRAPH_H


/*
 * In this Graph implementation;
 * Graps are asumed as undirected Graph,
 * Edges are asumed have positive cost
 */
class Graph
{
public:
    Graph()
    {

    }
    //returns the number of vertices in the graph
    void V(Graph &G){}

    //returns the number of edges in the graph
    void E(Graph &G){}

    //tests whether there is an edge from node x to node y.
    void adjacent (Graph &G, int x, int y){}

    //lists all nodes y such that there is an edge from x to y.
    void neighbors (Graph &G, int x){}

    // adds to G the edge from x to y, if it is not there.
    void add (Graph &G, int x, int y){}

    // removes the edge from x to y, if it is there.
    void delete_edge (Graph &G, int x, int y){}

    //returns the value associated with the node x.
    void get_node_value (Graph &G, int x){}

    //sets the value associated with the node x to a.
    void set_node_value( Graph &G, int x, int a){}

    // returns the value associated to the edge (x,y).
    int get_edge_value( int x, int y){ return G[x][y];}

    // sets the value associated to the edge (x,y) to v.
    void set_edge_value (int x, int y, int v){ G[x][y] = v;}

private:
    // gets edge denstity and distantence range then
    // produce a randomly set of edges with positive distance
    void produce_random_graph(int edge_denstity, int distance_range){

    }
    int G[50][50];
//    int V[50];

};


#endif //MONTECARLOSIMULATION_GRAPH_H
