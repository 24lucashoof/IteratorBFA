#include "AdjacencyList.h"

AdjacencyList::AdjacencyList(char vertexId)
{
	this->vertexId = vertexId;
}

AdjacencyList::~AdjacencyList()
{
}

char AdjacencyList::getVertexId() const
{
	return this->vertexId;
}

void AdjacencyList::addAdjanced(char vertex)
{
	this->adjancedVertices.push_back(vertex);
}

bool AdjacencyList::hasAdjanced(char vertex)
{
	for (int i = 0; i < this->adjancedVertices.size(); i++)
	{
		if (this->adjancedVertices[i] == vertex) {
			return true;
		}
	}

	return false;
}

std::vector<char> AdjacencyList::getAdjanced() const
{
	return this->adjancedVertices;
}
