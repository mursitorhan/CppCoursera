cmake_minimum_required(VERSION 3.6)
project(MonteCarloSimulation)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp PriorityQueue.cpp PriorityQueue.h Graph.cpp Graph.h ShortestPath.cpp ShortestPath.h SwapFunction/SwapFunction.h Generics/Generics.cpp Generics/Generics.h SpanningTree.cpp SpanningTree.h Kruskal.cpp Kruskal.h QuickSort.cpp QuickSort.h DeepFirstSearch.cpp DeepFirstSearch.h)
add_executable(MonteCarloSimulation ${SOURCE_FILES})