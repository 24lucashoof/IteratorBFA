#pragma once

#include "AdjacencyList.h"
#include "Graph.h";
#include <map>
#include <queue>

class Iterator
{
private:
	std::map<char, int > state; //-1 unk; 0 curr; 1 done
	std::map<char, int>d;//distance ( d[])
	std::map<char, char>pi; // (pi[])
	std::queue<char>queue;
	Graph graph;

	int vertexId;
	std::vector<char> adjancedVertices;

public:
	Iterator(Graph graph);
	~Iterator();
	void Reset(char startVertex);
	void Next();
	bool IsEnd();
	void CurrentKey();
	void printCurrent();
};

