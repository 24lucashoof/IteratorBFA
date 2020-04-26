#include "Graph.h"

Graph::Graph()
{
}

Graph::~Graph()
{
}

void Graph::addVertex(char vertexId)
{
	AdjacencyList vertex = AdjacencyList(vertexId);
	this->adjacencyList.push_back(vertex);
}

void Graph::addEdge(char from, char to)
{
	for (int i = 0; i < this->adjacencyList.size(); i++) {
		if (this->adjacencyList[i].getVertexId() == from) {
			this->adjacencyList[i].addAdjanced(to);
		}

		if (this->adjacencyList[i].getVertexId() == to) {
			this->adjacencyList[i].addAdjanced(from);
		}
	}
}

AdjacencyList Graph::find(char vertex)
{
	for (int i = 0; i < this->adjacencyList.size(); i++) {
		if (this->adjacencyList[i].getVertexId() == vertex) {
			return this->adjacencyList[i];
		}
	}
}
