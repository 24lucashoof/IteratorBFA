#pragma once
#include <iostream>

#include <vector>
#include <string>
#include <map>
#include <queue>

class AdjacencyList
{
public:
	AdjacencyList(char vertexId);
	~AdjacencyList();
	char getVertexId() const;
	void addAdjanced(char vertex);
	bool hasAdjanced(char vertex);
	std::vector<char> getAdjanced() const;
private:
	int vertexId;
	std::vector<char> adjancedVertices;
};

