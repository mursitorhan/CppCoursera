//
// Created by ma3 on 21.11.2016.
//

#ifndef MONTECARLOSIMULATION_SPANNINGTREE_H
#define MONTECARLOSIMULATION_SPANNINGTREE_H

#include <vector>
#include <list>
#include <string>

using namespace std;

//Strongly typed enumerators, enum classes
// class indicates that each enum type is different, and not comparable to
//other enum types Color::RED != Traffic::RED
enum class Color {RED, GREEN, BLUE};
enum class Traffic{RED, YELLOW, GREEN};



//we assume the graph given is connected with arbitrary edge costs
class SpanningTree {

public:
    /**
     * A spanning tree is a set of edges within the graph that connects all the nodes and where there is no cycle
     * if we have a graph n nodes, spannnig tree is tree with n -1 edges
     */
    //find a spanning tree of lest cost


    //prim's algorithm starts with a signle vertex and repeatedly joins the minimum-weight edge
    //at each step the tree is minimum spanning tree of the vertices that have been processed so far
    //prim builds spanning tree one node at a time connecting the node to the existing tree
    SpanningTree(const std::string fileName);

    void findSpanningTreeByPrim();

private:
    int n;// n vertices list
    vector< list< pair <int, int> > > G; // The graph representation will be in adjacency list form

};


#endif //MONTECARLOSIMULATION_SPANNINGTREE_H
