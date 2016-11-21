//
// Created by ma3 on 10.11.2016.
//

#include "Graph.h"

Graph::Graph(int n) :n(n){

}

int Graph::E() {

    int sumOfEdges = 0;

    for (int i = 0; i < n; ++i) {
        sumOfEdges += G[i].size();
    }
    return sumOfEdges;
}

int Graph::V() {
    return n;
}
