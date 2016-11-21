//
// Created by ma3 on 21.11.2016.
//

#include "SpanningTree.h"
#include<queue>
#include <fstream>
#include <iostream>


void SpanningTree::findSpanningTreeByPrim() {



    int INF = 10000;
    //set every distance to infinity until we discover a way to link a vertex to the spanning tree
    vector<int> dis(n,INF);//array of distances from source to each vertex
    vector<int> edges(n,0); // array indicating, for a given vertex, which vertex in the tree it is closest to

    vector<bool> MST(n);//list of finished vertices
    priority_queue< pair<int, int>, vector< pair<int, int> >, greater< pair<int, int> > > U;
    //list or heap unfinished vertices
    int s = 0;
    dis[s] = 0;

    U.push(make_pair(0, s));

    //
    while(MST.size() != n-1){

        int u = U.top().second;
        U.pop();//pick the vertex v in U with the shortest edge to group of vertices in the spanning tree


        MST[u] = true;//add v to MST


        list< pair<int,int> > :: iterator it;

        //for each of v, (v1 v2)
        for(it=G[u].begin(); it!=G[u].end(); it++){
           // int v = (*it).first;
            int l = (*it).second;

            /// Get vertex label and weight of current adjacent
            // of u.
            int v = (*it).first;
            int weight = (*it).second;

            //  If v is not in MST and weight of (u,v) is smaller
            // than current key of v
            if (MST[v] == false && dis[v] > weight)
            {
                // Updating key of v
                dis[v] = weight;
                U.push(make_pair(dis[v], v));
                edges[v] = weight;
            }
        }


    }

}

SpanningTree::SpanningTree(const std::string fileName) {

    string line;
    string n;
    ifstream inputFile (fileName);
    if (inputFile.is_open())
    {

        getline (inputFile,n);

        while ( getline (inputFile,line) )
        {
            cout << line << '\n';
        }
        inputFile.close();
    }
}


