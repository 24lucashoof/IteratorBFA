#pragma once

#include <iostream>
#include <map>
#include <queue>

#include "AdjacencyList.h"

class Graph
{
public:
	Graph();
	~Graph();
	void addVertex(char vertexId);
	void addEdge(char from, char to);
	AdjacencyList find(char vertex);
	std::vector<AdjacencyList> adjacencyList;
};

