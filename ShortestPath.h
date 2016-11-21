//
// Created by ma3 on 10.11.2016.
//

#ifndef MONTECARLOSIMULATION_SHORTESTPATH_H
#define MONTECARLOSIMULATION_SHORTESTPATH_H


//work on undirected graphs with costs
// this costs are non-negative values

//dijkstra shortest path
// find a shortest path between start and destination node s to d
// Step 1 : Include s in a closed set and all immediate successors of s with
// their distance in the open set.
// closed set has shortest distances
// open set has reachable nodes
// Step 2 : Pick the open node of least cost
// when calculate open set if new path cost is less than the value already existed cost in open set, update it
// Destination is placed in the closed set.
// the result for the destination does not guaranteee unique path but least costly path.


class ShortestPath {

};


#endif //MONTECARLOSIMULATION_SHORTESTPATH_H
